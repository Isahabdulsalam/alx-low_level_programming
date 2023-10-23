#include "main.h"

void more_numbers(void)
{
	int a;
	int b;

	b = 0;

	while (b < 10)
	{
		a = 0;

		while (a <= 14)
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		b++;
	}
}
