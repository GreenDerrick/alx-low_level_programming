#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums up the parameters in the functions
 * @n:variable to be manipualted
 * Return:sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add;

	va_list sum;

	va_start(sum, n);

	add = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		add = add + va_arg(sum, int);
	}
	va_end(sum);

	return (add);
}
