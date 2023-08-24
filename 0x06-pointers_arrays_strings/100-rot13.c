#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string
 * Return: pointer to modified string
 */
char *rot13(char *str)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyz";
	char *rot13 = "nopqrstuvwxyzabcdefghijklm";
	char curr, jurr;
	int i, j;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		curr = *(str + i);
		for (j = 0; *(alpha + j) != '\0'; j++)
		{
			jurr = *(alpha + j);
			if (curr == jurr)
			{
				*(str + i) = *(rot13 + j);
				break;
			}
			else if (curr == (jurr - 32))
			{
				*(str + i) = *(rot13 + j) - 32;
				break;
			}
		}
	}
	return (str);
}
