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
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
