#include "main.h"
/**
 * malloc_checked - functions checks for memory allocation
 *
 * @b: unsingned integer value to provide for the size of memory allocation
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(sizeof(*c) * b);

	if (c == NULL)
	{
		printf("Error: no memory has been allocated");
		return (1);
	}

	free(c);
}
