#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - A function that returns the number of elements in a
 * linked listint_t list
 * @h: A pointer to listint_t list
 * Return: result
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
