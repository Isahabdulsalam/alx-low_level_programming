#include "main.h"

/**
 * factorial - return factorial num
 * @n: the input
 * Return: -1 else 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
