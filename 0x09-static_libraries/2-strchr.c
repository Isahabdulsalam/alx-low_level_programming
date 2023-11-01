#include "main.h"

/**
 * _strchr - function that locate a char of string
 * @s: integer
 * @c: second integer
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}
