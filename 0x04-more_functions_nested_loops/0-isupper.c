#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: integer
 * Return: 1 if is upper else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
