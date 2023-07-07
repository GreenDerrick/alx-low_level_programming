#include "main.h"
/**
 * get_bit - function that return a bit value at a givem index
 * @n: variable to be manipulated
 * @index: variable to be manipulated
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
