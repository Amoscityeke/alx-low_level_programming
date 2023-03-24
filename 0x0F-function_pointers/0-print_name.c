#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - printfing a name
 * @name:string given
 * @f:pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
