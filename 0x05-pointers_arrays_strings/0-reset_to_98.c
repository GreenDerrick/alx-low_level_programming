#include "main.h"
/**
 * reset_to_98 - change the pointer value to 98
 *
 *@n: pointer value
 */
void reset_to_98(int *n)
{
	int p;

	p = 402;
	*n = 98;

	printf("%p\n", n);
}
