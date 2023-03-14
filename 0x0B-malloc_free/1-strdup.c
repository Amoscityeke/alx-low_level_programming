#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a new string
 * @str:  string
 * Return: NULL if not successful
 */



char *_strdup(char *str)
{
	char *new_string;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	new_string = malloc(sizeof(char) * (len + 1));

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new_string[i] = str[i];
	}
	new_string[len] = '\0';
	return (new_string);


}
