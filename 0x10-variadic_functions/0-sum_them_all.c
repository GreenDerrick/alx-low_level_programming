#include "variadic_functions.h"
/**
 * sum_them_all - sums up the parameters in the functions
 * @n:variable to be manipualted
 * Return:sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int add;
	int d;

	add = 0;
	va_list sum;

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		add = add + va_arg(sum, int);
	}
	va_end(sum);
	return (add);
}
