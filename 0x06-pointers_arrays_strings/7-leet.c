#include "main.h"

/**
 * leet - encodes a string into 1337
 * A(a) = 4, E(e) = 3, O(o) = 0, T(t) = 7, L(l) = 1
 * @str: the string
 * Return: pointer to modified string
 */
char *leet(char *str)
{
	char alpha[] = "AEOTL";
	char nums[] = "43071";
	char curr, jurr;
	int i, j;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		curr = *(str + i);
		for (j = 0; *(alpha + j) != '\0'; j++)
		{
			jurr = *(alpha + j);
			if (curr == jurr || curr == (jurr + 32))
				*(str + i) = *(nums + j);
		}
	}
	return (str);
}
