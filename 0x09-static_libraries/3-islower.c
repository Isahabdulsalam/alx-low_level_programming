#include "main.h"

/**
 * _islower - check for lowercase
 * Return: 1 if is lower else 0
 * @c: the character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
