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

	if (n == 0 || index == 0)
		exit(1);
	if (index > 64)
		return (-1);
	value = (n >> index) & 1;
	return (value & 1);
	_putchar('\n');
}
