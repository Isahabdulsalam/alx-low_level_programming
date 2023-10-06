#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * n - the value
 *
 * Return: sucess 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n", n);
	}
	else if (n == 0)
	{
		printf("is zero\n", n);
	}
	else
		printf("is negative\n", n);
	/* your code goes there */
	return (0);
}
