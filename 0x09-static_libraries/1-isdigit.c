#include "main.h"

/**
 * _isdigit - check for digits
 * @c: character
 * Return: 1 else 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
