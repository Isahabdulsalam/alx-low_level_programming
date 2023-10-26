#include "main.h"

/**
 * _strlen_recursion - length of the string
 * @s: the input
 * Return: success
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
