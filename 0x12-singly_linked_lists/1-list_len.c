#include <stdio.h>
#include "lists.h"
/**
 * list_len - A function that returns the number of elements
 * in a linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		list++;
		h = h->next;
	}
	return (list);
}
