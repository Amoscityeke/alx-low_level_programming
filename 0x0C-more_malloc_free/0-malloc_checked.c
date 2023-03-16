#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: number of byte to be  allocated
 * Return: return a pointer to the allocated memory
 */




void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
