#include "main.h"

/**
 * _memset - fill memory with a byte
 * @s: the pointer
 * @b: value
 * @n: number of byte to be changed
 * Return: new value that is changed for the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
