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
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
