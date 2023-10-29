#include "main.h"

/**
 * _isupper - check for upper case
 * Return: 1 if is uppercase else 0
 * @c: character
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
