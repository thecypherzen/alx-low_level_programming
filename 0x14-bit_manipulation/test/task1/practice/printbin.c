#include "main.h"


/**
 * print_binary - prints the binary representation of a number
 * @n: the number;
 * Return: void
 */
int main(void)
{
	long int a, i, j;
	char byte, bit;

	printf("Enter a number: ");
	scanf("%ld", &a);

	for (i = 0; i < (long int)sizeof(int); i++)
	{
		byte = ((char *)&a)[i];
		for (j = 8; j >= 0; j--)
		{
			bit = (byte >> j) & 1;
			printf("%hd", bit);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
