#include "main.h"

/**
 * _memcpy - function to copy memory
 * @dest: memory where is stored
 * @src: memory to copy
 * @n: number of bytes
 * Return: copied array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
