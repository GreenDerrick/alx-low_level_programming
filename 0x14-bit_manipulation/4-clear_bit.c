#include "main.h"

/**
 * clear_bit - sets the value of specified bit to 0
 * @n: variable to be manipulated
 * @index: variable to be manipulated
 * Return: 1 if success -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
