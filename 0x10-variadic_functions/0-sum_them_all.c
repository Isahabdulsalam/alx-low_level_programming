#include "variadic_functions.h"

/**
 * sum_them_all - return sum with paraments
 * @n: the argument
 * @...: argument to pass
 * Return: sum all
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
