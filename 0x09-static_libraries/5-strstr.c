#include "main.h"

/**
 * _strstr - function
 * @haystack: character
 * @needle: second character
 * Return: always success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *z = needle;

		while (*a == *z && *z != '\0')
		{
			a++;
			z++;
		}
		if (*z == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
