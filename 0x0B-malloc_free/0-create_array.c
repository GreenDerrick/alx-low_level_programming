#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - function to create an array
 *
 * @size: variable to be mainpulated
 * @c: variable to be manipuated
 * Return: 1 if false 0 if true
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (ptr);
}
