#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Lower and Upper Letter
 *
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
