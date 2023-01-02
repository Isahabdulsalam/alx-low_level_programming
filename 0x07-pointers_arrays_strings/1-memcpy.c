#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: char array to copy info
 * @src: char array copy from
 * @n: number of element to copy
 * Return: pointer to 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)

	{
		dest[count] = src[count];

		count++;
	}

	return (dest);
}
