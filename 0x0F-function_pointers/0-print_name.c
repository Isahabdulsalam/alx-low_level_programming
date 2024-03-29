#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using function pointers
 * @name: the string to add
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
