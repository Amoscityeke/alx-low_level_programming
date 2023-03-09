#include "main.h"

/**
 * _print_rev_recursion - printing of string in reverse using recursion
 * @s: parameter to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
