#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print hexadecimal numbers
 *
 * Return: always 0
 */
int main(void)
{
	int m;
	char B;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');

	for (B = 'a'; B <= 'f'; B++)
		putchar(B);

	putchar('\n');

	return (0);
}

