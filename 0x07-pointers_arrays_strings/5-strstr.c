#include "main.h"

/**
 *  _strstr - finds the first occurrence of the substring needle in the string
 * haystack
 * @haystack: string to be checked
 * @needle: string to check
 * Return: a pointer to the beginning of the located substring
 *         or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *hys;

	hys = haystack;

	while (*hys != '\0')
	{
		i = 0;
		while (needle[i] == *(hys + i))
		{
			if (needle[i] == '\0')
				return (hys);
			i++;
		}
		hys++;
	}
	return (NULL);
}
