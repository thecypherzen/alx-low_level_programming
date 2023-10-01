#include "main.h"

/**
 * get_endianness - checks the endianness of a system.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	_uint n = 16777216;
	char f_byte;

	f_byte = ((char *)&n)[3];
	if (f_byte)
		return (1);
	else
		return (0);
}
