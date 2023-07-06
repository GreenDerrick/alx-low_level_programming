#include "main.h"
/**
 * print_binary - function that prints binary representation
 * @n: variable to be manipulated
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int mod[64];
	int count;
	int i;

	count = 0;
	if (n == 0)
		_putchar(0 + '0');
	while (n != 0)
	{
		mod[count] = n % 2;
		count++;
		n = n / 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(mod[i] + '0');
	}
}
