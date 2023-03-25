#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the differences of two numbers
 * @a: first number
 * @b: second number
 *
 * Return:the differences of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - retuns the product of two numbers
 * @a: first number
 * @b:second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division
 * @a:first number
 * @b:second number
 *
 * Return:the result of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the reminder of the division
 * @a: first number
 * @b:second number
 *
 * Return:the reminder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
