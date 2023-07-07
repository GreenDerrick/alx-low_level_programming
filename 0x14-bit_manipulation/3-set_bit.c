#include "main.h"
/**
 * set_bit - function that sets valur oa bit to 1 at a given index
 * @n: bit to be changed
 * @index" variable to be manipulated
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
