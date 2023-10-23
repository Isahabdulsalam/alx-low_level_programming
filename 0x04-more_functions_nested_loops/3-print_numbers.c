#include "main.h"

/**
 * print_numbers - print from 0 to 9
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
