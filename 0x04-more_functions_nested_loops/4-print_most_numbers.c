#include "main.h"

/**
 * print_most_numbers - print from 1 to 9 except 1 & 4
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		{
			putchar(a);
		}
	}
	putchar('\n');
}

