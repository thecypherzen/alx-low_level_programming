#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string
 * Return: pointer to modified string
 */
char *rot13(char *str)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
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
		}
	}
	return (str);
}
