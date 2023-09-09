#include "main.h"
#include <stdint.h>

/**
 * main - multiplies two numbers passed via the command line
 * @argsc: - number of arguments
 * @argsv: - ptr to list of arguments
 * Return: result of multiplication, NULL if malloc fail, 98 otherwise.
 */
int main(int argsc, char **argsv)
{
	int is_num, len1, len2, i;
	char *res, *num1, *num2;

	i = 0;
	if (argsc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if ((**(argsv + 1) == 48 && (int)strlen(*(argsv + 1)) == 1) || (**(argsv + 2) == 48 && (int)strlen(*(argsv + 2)) == 1))
	{
		printf("%d\n", 0);
		return (0);
	}
	is_num = num_check(--argsc, ++argsv);
	if (!is_num)
	{
		printf("Error\n");
		return (98);
	}
	len1 = (int)strlen(argsv[0]), len2 = (int)strlen(argsv[1]);
	num1 = len1 >= len2 ? argsv[0] : argsv[1];
	num2 = len2 <= len1 ? argsv[1] : argsv[0];

	res = _mult(num1, num2);
	while (*(res + i) == 48)
		i++;
	printf("%s\n", res + i);
	free(res);
	return (0);
}
/**
 * _mult - multiplies two numbers
 * @num1: ptr to first number
 * @num2: ptr to sedonc number
 * Return: ptr to result of multiplication
 */
char *_mult(char *num1, char *num2)
{
	int l1, l2, lres, i, j, hold, carry, mult;
	char *res;

	l1 = (int)strlen(num1), l2 = (int)strlen(num2), lres = l1 + l2;
	res = malloc(sizeof(char) * (lres + 1));
	if (!res)
		return (NULL);
	num2 += l2 - 1, res += lres - 1, i = 0, res[lres] = '\0';
	while (i < l2)
	{
		num1 += l1 - 1, j = carry = 0;
		while (j < l1)
		{
			hold = i > 0 ? *res - 48 : 0;
			mult = (*num1 - 48) * (*num2 - 48) + hold + carry;
			if (mult > 9)
				*res = (mult % 10) + 48, carry = (mult / 10);
			else
				*res = mult + 48, carry = 0;
			if (j != l1 - 1)
				num1--;
			j++, res--;
		}
		*res = carry + 48;
		if (i != l2 - 1)
			num2--, res += l1 - 1;
		i++;
	}
	return (res);
}
/**
 * num_check - checks if arguments are both numbers
 * @count: number of arguments passed
 * @args: list of arguments
 * Return: 1 of both are numbers, 0 otherwise.
 */
int num_check(int count, char **args)
{
	int i, j;
	char *temp;

	for (i = 0; i < count; i++)
	{
		temp = args[i], j = 0;
		while (temp[j])
		{
			if (temp[j] >= 48 && temp[j] <= 57)
				j++;
			else
				return (0);
		}
	}
	return (1);
}
