#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that convert binary to unsigned int
 * @b: pointer to string
 * Return: return 0 if Null else return value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer;
	const char *c;

	answer = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (c = b; *c; c++)
	{
		if (*c != '0' && *c != '1')
		{
			return (0);
		}
		answer = (answer << 1) + (*c - '0');
	}
	return (answer);
}
