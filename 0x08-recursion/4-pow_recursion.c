#include "main.h"

/**
 * _pow_recursion - print x to the power of y
 * @x: manipulating variable
 * @y: power of x variable
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
