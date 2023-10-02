#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters:the number of letters it could read and print
 * @filename: the file from which to read
 * Return: num of letters it could read and print
 *         0 if file can't be opened or read or filename is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t descriptor, bytes_ptd, bytes_rd;
	char *filebuffr;

	if (!filename)
		return (0);
	descriptor = open(filename, O_RDONLY);
	if (descriptor < 0)
		return (0);
	filebuffr = malloc(letters);
	if (!filebuffr)
	{
		close(descriptor);
		return (0);
	}
	bytes_rd = read(descriptor, filebuffr, letters);
	if (bytes_rd < 0)
	{
		free(filebuffr), close(descriptor);
		return (0);
	}
	bytes_ptd = write(STDOUT_FILENO, filebuffr, bytes_rd);
	free(filebuffr), close(descriptor);
	if (bytes_ptd < 0)
		return (0);
	return (bytes_ptd);
}
