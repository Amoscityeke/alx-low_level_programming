#include "main.h"

/**
 * print_alphabet_x10 - printing of lower case alphabet ten times
 *
 * Return: 0 Always
 */

void print_alphabet_x10(void)
{
	char k;
	int i;

	for (k = 'a' ; k <= 'z' ; k++)
	{
		for (i = 1 ; i <= 10 ; i++)
			_putchar(k);
	_putchar('\n');
	}
}
