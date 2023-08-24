#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string
 * Return: pointer to modified string
 */
char *cap_string(char *str)
{
	char curr, prev, *temp;
	int i;

	i = 0;
	temp = str;

	while (*(temp + i) != '\0')
	{
		curr = *(temp + i);
		prev = *(temp + (i - 1));
		/* check if curr is preceeded by a line separator */

		if (curr == *str || cspl(prev))
		{
			/* if char is not a num && not a separator */
			if (curr >= 97 && curr <= 122)
				*(temp + i) -= 32;
		}
		i++;
	}
	str = temp;
	return (str);
}

/**
 * cspl - checks if a char is a special separator
 * @c: the character to check
 * Return: 1 if true, 0 if false
 */
int cspl(char c)
{
	char *seps;

	seps = ",;.!?} \t\n";
	while (*seps != '\0')
	{
		if (*seps == c)
			return (1);
		seps++;
	}
	return (0);
}
