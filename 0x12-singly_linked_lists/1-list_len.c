#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gives the number of elements in a linked list
 * @h: the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
