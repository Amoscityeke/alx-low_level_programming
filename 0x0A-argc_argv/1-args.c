#include <stdio.h>
#include "main.h"
/**
 * main - printing the number of argument passed
 * @argc: number parameter
 * @argv:array parameter
 * Return:  0 if successful
 */


int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
