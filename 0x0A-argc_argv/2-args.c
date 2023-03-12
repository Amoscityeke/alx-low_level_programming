#include <stdio.h>
#include "main.h"
/**
 * main - function that prints all argument
 * @argc:number parameter
 * @argv:arrays parameter
 * Return: 0 if successful
 */


int main(int argc,  char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
