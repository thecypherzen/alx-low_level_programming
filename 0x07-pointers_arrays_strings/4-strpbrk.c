#include "main.h"

/**
 *  _strpbrk - locates the first occurrence in the string s of any of the bytes
 * in the string accept
 * @s: string to be checked
 * @accept: string to check
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *         or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *scp;

	scp = s;

	while (*scp != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*scp == accept[i])
				return (scp);
			else
				i++;
		}
		scp++;
	}
	return (NULL);
}
