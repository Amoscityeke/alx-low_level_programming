#include <stdio.h>
#include "main.h"
#include <stdlib.h>
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
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;

	printf("%d\n", mult);
	return (0);
}
