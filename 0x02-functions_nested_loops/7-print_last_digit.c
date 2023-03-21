#include "main.h"
/**
 * print_last_digit - function to print the last digit of a number
 *
 * @i: integer to be manipulated
 * Return: Return the integer i
 */

int print_last_digit(int i)
{
	int last;

	last =  i % 10;
	_putchar(last);
	return (0);
}
