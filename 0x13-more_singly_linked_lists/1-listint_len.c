#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * listint_len - A function that returns the number of elements in a
 * linkedint_t list
 * @h: A pointer to the listint_t list
 * Return: result
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);

}
