#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *
 * create_array - function to create an array
 * @size: variable to be mainpulated
 * @c: variable to be manipuated
 * Return: 1 if false 0 if true
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(c) * size);
	}
	return (0);
}
