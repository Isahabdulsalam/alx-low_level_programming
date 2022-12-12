#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: always 0
 */
int main(void)
{
	int B;

	for (B = 0; B <= 9; B++)
	{
		putchar((B % 10) + 0);
		if (B == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchart('\n');

	return (0);
}
