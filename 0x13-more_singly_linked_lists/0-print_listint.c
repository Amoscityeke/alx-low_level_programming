#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint - prints all the elements of a listint_t list
 * @h: A pointer to the head of listint_t list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t print = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		print++;
	}
	return (print);

}
