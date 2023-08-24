#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string
 * Return: pointer to modified string
 */
char *string_toupper(char *str)
{
	char *temp;
	int i;

	i = 0;

	temp = str;
	while (*temp != '\0')
	{
		if ((*temp >= 'a') && (*temp <= 'z'))
			*temp = *temp - 32;
		temp++;
		i++;
	}

	str = temp - i;
	return (str);
}
