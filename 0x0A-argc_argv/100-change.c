#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc:argc parameter
 * @argv: an array of command
 * Return: 0 if successful
 */



int main(int argc, char *argv[])
{
	int cents, j, result = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && cents >= 0; j++)
	{
		while (cents >= coin[j])
		{
			cents -= coin[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
