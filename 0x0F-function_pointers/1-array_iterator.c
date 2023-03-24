#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - print each array element on a newline
 * @array: array
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	if (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
