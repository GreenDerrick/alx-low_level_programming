#include "main.h"
/**
 * factorial - function that outputs factorial of a given number
 *
 * @n: variable to be manipulated
 * Return: number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (1);
	if (n != 1)
		return (n * factorial(n - 1));
	return (0);
}
