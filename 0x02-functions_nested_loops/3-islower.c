#include "main.h"

/**
 * _islower - function to check for lowcase
 * @c: check for lower case
 * Return: return 1 if it is true otherwise return 0
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
