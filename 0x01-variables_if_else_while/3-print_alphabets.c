#include <stdio.h>

/**
 * main - entry point
 *
 * Return: success
 */
int main(void)
{
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int b;

	for (b = 0; b < 52; b++)
	{
		putchar(a[b]);
	}
	putchar('\n');
	return (0);
}
