#include "main.h"

/**
 * print_sign - printing of signs
 *
 * @n: parameters to be printed
 *
 * Return: 1 if is greater than 0
 * or 0 if is equal to 0
 * or -1 if less than 0
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
