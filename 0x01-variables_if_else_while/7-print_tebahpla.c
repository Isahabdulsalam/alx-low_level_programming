#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
{
	char B;

	for (B = "z"; B >= "a"; B--)
		putchar(B);

	putchar('\n');

	return (0);
}
