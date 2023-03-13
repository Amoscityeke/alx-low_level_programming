#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - adding of two positive integer
 * @argc:number argument
 * @argv: array argument
 * Return: 0 if successful
 */



int main(int argc, char *argv[])
{
	int i;
	int j;
	int result;

	if (argc != 1)
	{
		printf("0");
		printf("\n");

	}
	if (check_num)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i + j;
		printf("%d\n", result);
	}
	return (0);

}
