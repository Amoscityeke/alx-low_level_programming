#include "main.h"
/**
 * _puts_recursion - printing of a string with recursion
 * @s: string to be printed
 *
 * Return: result
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}
