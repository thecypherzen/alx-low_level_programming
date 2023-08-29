#include "main.h"

/**
 *  _strspn - Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: string to check
 * @accept: number of bytes in s to fill
 * Return: pointer to dest
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, chkr;

	i = 0, chkr = 1;
	while (chkr)
	{
		j = 0;
		while (accept[j] != s[i] && s[i] != '\0')
		{
			if (accept[j] == '\0')
			{
				chkr = 0;
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}
