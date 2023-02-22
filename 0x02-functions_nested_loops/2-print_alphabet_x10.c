#include "main.h"

/**
 * print_alphabet_x10 - printing of lower case alphabet ten times
 *
 * Return: 0 Always
 */

void print_alphabet_x10(void)
{
	int k;
	char i;

	for (k = 1 ; k <= 10 ; k++)
	{
		for (i = 'a'; i <= 'z' ; i++)
			_putchar(k);
	_putchar('\n');
	}
}
