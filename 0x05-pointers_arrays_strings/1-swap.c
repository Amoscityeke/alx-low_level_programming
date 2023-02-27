#include "main.h"

/**
 * swap_int - swaping an int
 * @a: integer to be swap
 * @b: integer to be swap
 */


void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;

}
