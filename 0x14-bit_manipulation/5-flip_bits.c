#include "main.h"

/**
 * flip_bits - function that print number of bits flip
 * @n: first long int
 * @m: second long int
 * Return: value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
