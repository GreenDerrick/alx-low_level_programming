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
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
