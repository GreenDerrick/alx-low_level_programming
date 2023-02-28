#include "main.h"
/**
 * swap_int - swap integer values
 *
 * @*a: first integer
 * @*b: second integer
 */
void swap_int(int *a, int *b)
{
	printf("Value of a : %p\n", &a);
	printf("value of b : %p\n", &b);

	a = b;
	b = a;

	printf("value of a : %p\n", &a);
}
