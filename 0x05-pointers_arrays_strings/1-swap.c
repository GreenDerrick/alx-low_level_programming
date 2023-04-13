#include "main.h"
#include <stdlib.h>
/**
 * swap_int - function to swap the location of given integers
 *
 * @a: variable to be manipulated
 * @b: variable to ve manipulated
 * Return: nothing(void)
 */

void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
