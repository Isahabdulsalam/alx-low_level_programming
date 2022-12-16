#include "main.h"

/**
 * print_numbers - print 0123456789
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar((num % 10) + '0');

	}
	_putchar('\n');
}
