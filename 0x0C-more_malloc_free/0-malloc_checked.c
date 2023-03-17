#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - functions checks for memory allocation
 *
 * @b: unsingned integer value to provide for the size of memory allocation
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(sizeof(*c) * b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
