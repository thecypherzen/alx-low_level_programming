#include "main.h"

/**
 * create_file - creates a file
 * - The created file must have those permissions: rw-------.
 * - If the file already exists, do not change the permissions.
 * - If the file already exists, truncate it
 * - If text_content is NULL, create an empty file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, - 1 on failure (file can not be created, file can not
 *         be written, write “fails”, filename is NULL, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fdes, bytes_wtn;

	if (!filename)
		return (-1);
	fdes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdes < 0)
		return (-1);
	if (!text_content)
	{
		close(fdes);
		return (1);
	}
	bytes_wtn = write(fdes, text_content, _strlen(text_content));
	close(fdes);
	if (bytes_wtn < 0)
		return (-1);
	return (1);
}
/**
 * _strlen - gets the length of a null terminated string.
 * @str: the string
 * Return: len of str always.
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	if (str)
	{
		while (*(str++))
			len++;
	}
	return (len);
}
