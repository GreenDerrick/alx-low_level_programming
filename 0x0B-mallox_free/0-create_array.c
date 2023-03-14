#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that return size and c
 *
 * @size: parameter for int value
 * @c: parameter for character value
 *
 * Return: 0 if Null else Return to aaray
 */

char *create_array(unsigned int size, char c)
{
	int i;
	int *p;

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	for (i = 0; i <= size; i++)
		c = p[i]
}

