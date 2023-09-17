#include "function_pointers.h"


/**
 * main - prints op codes of main
 * @args: number of cmd args
 * @list: list of cmd args
 * Return: 0 on success, 1 @args is incorrect, 2 if @args < 0.
 */
int main(int args, char **list)
{
	int size;
	char *main_buff;

	if (args != 2) /* num of args check */
	{
		printf("Error\n");
		return (1);
	}

	size = atoi(list[1]);

	if (size < 0) /* check if size negative */
	{
		printf("Error\n");
		return (2);
	}

	main_buff = (char *)&main;
	op_codes(main_buff, (unsigned int)size);
	return (0);
}
/**
 * op_codes - prints op codes of a function address
 * @buff: ptr to memory location
 * @size: bytes of memory to print
 * Return: void
 */
void op_codes(char *buff, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("%02x", (unsigned char)buff[i]);
		printf("%c", (i != size - 1) ? ' ' : '\n');
	}
}
