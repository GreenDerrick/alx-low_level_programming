#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - a function that will loop through the array
 * 
 * @size; the size of the array
 * @action: pointer function to the array_iterator
 * Return: No return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;


	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}
