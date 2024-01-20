#include "main.h"

/**
 * _islower - check for lowercase character.
 * @c: character
 * Return: 1 if c is uppercase and 0 otherwise.
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
