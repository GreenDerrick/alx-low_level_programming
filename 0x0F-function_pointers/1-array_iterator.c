#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - will prints array accordin to the size specified
 *
 * @array: pointer variable
 * @size: size of array to be printed
 * @action: function pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (i < 0)
	{
		exit(1);
	}
	while (i <= size)
	{
		action(array[i]);
		i++;
	}
}
