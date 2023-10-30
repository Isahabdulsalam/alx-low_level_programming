#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of a character
 * @size: size of char
 * @c: character
 * Return: string
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (0);
	}

	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}
	return (str);
}
