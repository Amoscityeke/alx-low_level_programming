#include "main.h"

/**
 * _isupper - checking uppercase
 * @c: parameter to be printed
 *
 * Return: always 0
 */

int _isupper(int c)
{
	

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
