#include "main.h"
/**
 * get_bit - function that return a bit value at a givem index
 * @n: variable to be manipulated
 * @index: variable to be manipulated
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int buffer;

	if (index > 64)
		return (-1);

	buffer = n >> index;

	return (buffer & 1);
}
