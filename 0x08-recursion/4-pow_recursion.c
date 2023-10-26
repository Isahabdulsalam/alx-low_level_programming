#include "main.h"

/**
 * _pow_recursion - return value x raised to the power of y
 * @x: input
 * @y: input
 * Return: value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - q));
}
