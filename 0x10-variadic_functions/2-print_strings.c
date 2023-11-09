#include "variadic_functions.h"

/**
 * print_strings - print string followed by new line
 * @separator: string
 * @n: the integer
 * Return: success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int a;
	char *st;

	va_start(str, n);

	for (a = 0; a < n; a++)
	{
		st = va_arg(str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", st);
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("\n");
		va_end(str);
	}
}
