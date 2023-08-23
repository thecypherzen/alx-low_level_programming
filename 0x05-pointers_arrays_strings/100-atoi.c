#include "main.h"


/**
 * _atoi -  convert a string to an integer.
 * @s: the string
 * Return: 0 always
 */
int _atoi(char *s)
{
	int if_neg, i, int_val;
	char *nums, curr;

	nums = _getdigits(s);
	if (_strlen(nums) == 0)
		return (0);

	if_neg = _ifneg(s);
	int_val = 0;

	for (i = 0; i < _strlen(nums); i++)
	{
		curr = *(nums + i);
		int_val = (int_val * 10) + (curr - 48);
	}

	int_val =  (if_neg) ? (int_val * (-1)) : int_val;

	free(nums);
	return (int_val);
}

/**
 * _ifneg - checks if a string is negative or positive based on number of
 * minus signes before it.
 * @s: the string
 * Return: if negative (1) or (0)
 */
int _ifneg(char *s)
{
	int i, if_neg, negs, ifn;

	ifn = _getifd(s);
	negs = 0;

	for (i = 0; i <= ifn; i++)
	{
		if (*(s + i) == '-')
			negs++;
	}

	if_neg = (negs % 2) ? 1 : 0;
	return (if_neg);
}


/**
 * _getifd - gets index of first digit in a string of chars.
 * @str: the string
 * Return: the index
 */
int _getifd(char *str)
{
	int i, ifd;
	char curr;

	ifd = -1;
	for (i = 0; i < _strlen(str); i++)
	{
		curr = *(str + i);
		if (curr >= 48 && curr <= 57)
		{
			ifd = i;
			break;
		}
	}
	return (ifd);
}


/**
 * _getdigits - extracts first set of digits in a string
 * @str: the string pointer
 * Return: pointer to array of number chars
 */
char *_getdigits(char *str)
{
	int len, i, j;
	char curr, next, *digits;

	len = _strlen(str);
	digits = malloc(len);
	j = 0;

	for (i = 0; i < len; i++)
	{
		curr = *(str + i);
		next = *(str + (i + 1));
		if (curr >= 48 && curr <= 57)
		{
			*(digits + j) = curr;
			if (next >= 48 && next <= 57)
				j++;
			else
				break;
		}
	}
	return (digits);
}


/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
