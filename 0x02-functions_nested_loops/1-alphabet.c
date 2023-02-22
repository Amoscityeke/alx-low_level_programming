#include "main.h"

/**
 * main - Entry
 * print_alphabet - this is for printing alphabet from a to z in lower case
 *
 * Return: Always 0
 */


void print_alphabet(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		_putchar(j);
	_putchar('\n');
}
