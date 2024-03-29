#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a given function
 * @array: array of the number
 * @size: the size of array
 * @action: function pointer
 * Return: success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
