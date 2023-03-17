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

	c = malloc(sizeof(char) * b);

	if (c == NULL)
	{
		printf("Error: no memory has been allocated");
		exit (98);
	}

	free(c);
}
