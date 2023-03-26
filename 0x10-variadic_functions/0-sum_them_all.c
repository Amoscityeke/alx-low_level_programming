#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - A function that returns the sum of its
 * parameter
 * @n: the number of paramters passed to the function
 * @...: A varible number to calculate the sum
 *
 * Return:if n == 0 return 0 otherwise return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
