#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: success 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) < 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n % 10, n);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0", n % 10, n);
	}
	else if ((n % 10) > 6 && n != 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n % 10, n);
	}
	return (0);
}
