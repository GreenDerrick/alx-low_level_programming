#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function for duplicating the string
 *
 * @str: string to be duplicated
 * Return: NULL if insufficient memory
 */

char *_strdup(char *str)
{
	str = malloc(sizeof(char));

	if (str == NULL)
		return (NULL);

	free(str);
	return (str);
}
