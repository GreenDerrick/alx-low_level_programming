#include "main.h"
/**
 * _pow_recursion - functiona that raises a number by another
 *
 * @x: base number
 * @y: power number
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y >= 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
