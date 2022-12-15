#include "main.h"

/**
 * print_numbers - Print numbers between 0 to 9
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
