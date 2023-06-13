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
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
