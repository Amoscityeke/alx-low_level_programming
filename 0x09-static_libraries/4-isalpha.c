#include "main.h"

/**
 * _isalpha - checking alphbetic character
 *
 * @c: printing if any character is found
 *
 * Return: 1 is c is a letter
 * or return 0 if otherwise
 */


int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
