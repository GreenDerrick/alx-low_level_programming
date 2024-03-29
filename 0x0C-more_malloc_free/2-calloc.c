#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function to alocate memory to an array
 * @nmemb: variable
 * @size: size of the memory
 * Return: pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 && size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
