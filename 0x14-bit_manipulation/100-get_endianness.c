#include "main.h"

/**
 * get_endianness - function that check for endianness
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *)&x;

	return ((int)*c);
}
