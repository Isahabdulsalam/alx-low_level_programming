#include "lists.h"
#include <stdlib.h>

/**
 * print_list -return the number element in a linked list
 * @h: the link list
 * Return: noles
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
