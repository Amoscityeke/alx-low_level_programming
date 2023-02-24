#include "main.h"

/**
 * _isdigit - checking numbers
 * @c: parameter to be checked
 * Return: return 1 if true or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0'&&  c <= '9')
		return (1);
	else
		return (0);
}
