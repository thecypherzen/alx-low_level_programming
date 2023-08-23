#include "main.h"
#include <stdlib.h>
#include <time.h>

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
	int ran, i;

	srand(time(NULL));
	ran = (rand() % 11) + 10;
	i = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
			return (ran);
		else if (*(s1 + i) < *(s2 + i))
			return (ran * (-1));
		i++;
	}

	if (*(s1 + i) == '\0' && *(s2 + i) != '\0')
		return (ran * (-1));
	else if (*(s1 + i) != '\0' && *(s2 + i) == '\0')
		return (ran);
	return (0);
}
