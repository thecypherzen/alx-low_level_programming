#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: the first number
 * @n2: the second number
 * @r: buffer to store the result
 * @size_r: the size of buffer
 * Return: 0 always
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2, i, j, sum;
	char *s1, *s2;

	memset(r, 48, size_r * sizeof(char));
	l1 = strlen(n1), l2 = strlen(n2);
	/* identify longer/ shorter string */
	s1 = (l1 >= l2) ? n1 : n2, s2 = (l2 <= l1) ? n2 : n1;
	i = l1 > l2 ? l1 - 1  : l2 - 1, j = (l1 > l2) ? l2 - 1  : l1 - 1;
	*(r + i + 2)  = '\0';
	l1 = strlen(s1), l2 = strlen(s2);
	if (l1 >= --size_r)
		return (0);
	s1 += i, s2 += j; /* move s1 and s2 ptrs to end of each str */
	for (; i >= 0; i--)
	{
		if (j >= 0)
			sum =  (*s1 - 48) + (*s2 - 48) + (r[i + 1] - 48), j--;
		else if (l1 > l2)
			sum = (*s1 - 48) + (r[i + 1] - 48);
		else if (l2 > l1)
			sum =  (*s2 - 48) + (r[i + 1] - 48);
		if (sum > 9)
		{
			r[i + 1] = (sum  % 10) + 48;
			r[i] = (sum / 10) + 48;
		}
		else
			r[i + 1] = sum + 48, s1--, s2--;
	}
	if (*r == 48)
		return (r + 1);
	return (r);
}
