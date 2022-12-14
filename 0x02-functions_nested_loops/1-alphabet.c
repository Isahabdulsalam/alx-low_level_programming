#include "main.h"

/**
 * main - print alphabet in lower case using _putchar
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	{
		_putchar(alpha);
	}
	_putchar('\n');

	return (0);
}
