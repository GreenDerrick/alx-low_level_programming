#include "main.h"
/**
 * factorial - find the factorial of n
 * @n: variable to be manipulated.
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
		return (n * factorial(n - 1));
	}
	if (n < 0)
		return (-1);
	return (0);
}