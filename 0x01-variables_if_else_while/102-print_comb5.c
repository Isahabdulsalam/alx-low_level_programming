#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *      
 * Return: Always 0.
 */
int main(void)
{
	int A, B;

	for (A = 0; A <= 98; A++)
	{
		for (B = A + 1; B <= 99; B++)
		{
			putchar((A / 10) + '0');
			putchar((A % 10) + '0');
			putchar(' ');
			putchar((B / 10) + '0');
			putchar((B % 10) + '0');

			if (A == 98 && B == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
