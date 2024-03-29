#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that gives a paramerter on each array element
 * @array: variable to be manipulated
 * @size: size of the array
 * @action: function poitner
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		exit(1);

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
