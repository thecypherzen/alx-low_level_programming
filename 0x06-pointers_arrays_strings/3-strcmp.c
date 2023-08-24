#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: < 0 if s1 < s2
 *         > 0 if s1 > s2
 *         0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	char curr1, curr2;

	i = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		curr1 = *(s1 + i);
		curr2 = *(s2 + i);
		if (curr1 > curr2 || curr1 < curr2)
			return (curr1 - curr2);
		i++;
	}

	curr1 = *(s1 + i);
	curr2 = *(s2 + i);

	if (curr1 == '\0' && curr2 != '\0')
		return (0 - curr2);
	else if (curr1 != '\0' && curr2 == '\0')
		return (curr1);
	return (0);
}
