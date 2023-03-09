#include "main.h"
/**
 * _strlen_recursion - printing the function that returns length of string
 * @s: parameter to be printed
 * Return:the length of string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
