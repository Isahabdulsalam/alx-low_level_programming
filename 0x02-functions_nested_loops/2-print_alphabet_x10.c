#include "main.h"

/**
 * print_alphabet_x10 - print alphabet a - z 10 times
 */

void print_alphabet_x10(void)
{
	char a;
	int n;

	n = 0;

	while (n < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		n++;
	}
}
