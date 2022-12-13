#include <stdio.h>
/**
 * main - prints all possible different combinations of 2 digits
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i = 0;
	int b;
	int d;

	while (i <= 99)
	{
		b = (i / 10 + '0');
		d = (i % 10 + '0');

		if (b < d)
		{
			putchar(b);
			putchar(d);

			if (i != 89)
			{
	
				putchar(',');
				putchar(' ');
			}
		}
		++i;
	}
	
	putchar('\n');
	
	return (0);

}
