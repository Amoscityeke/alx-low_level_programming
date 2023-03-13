#include <stdio.h>
#include "main.h"

/**
 * main - multiplication of two argument
 * @argc: number parameter
 * @argv: array parameter
 * Return: result
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (num1 = 1; num1 < argc; num1++)
	{
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mult = num1 * num2;
	printf("%d\n", mult);
	}
	return (0);
}
