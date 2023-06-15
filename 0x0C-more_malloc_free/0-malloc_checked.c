#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - allocates a memory using malloc
 * @b: variable to be manipulated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
