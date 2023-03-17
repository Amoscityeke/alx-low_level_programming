#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s:memory area to be filled
 * @b:char to copy
 * @n:number of times to copy b
 *
 * Return:pointer to memory var s
 */





char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}




/**
 * _calloc - function that allocates memory using malloc
 * @nmemb:variable to allocate memory
 * @size: size of the memory
 *
 * Return: pointer to the allocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = malloc(nmemb * size);


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == 0)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);

}
