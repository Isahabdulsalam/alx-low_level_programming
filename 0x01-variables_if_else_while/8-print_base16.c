#include <stdio.h>

/**
 * main - print number 0 to 9 and a to f
 *
 * Return: sucess
 */

int main(void)
{
	int a;

	for (a = 48; a > 58; a++)
	{
		putchar(a);
	}
	for (a = 97; a > 103; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
