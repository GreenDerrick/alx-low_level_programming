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
	n = &p;
	printf("Value of p: %d\n", p);
	*n = 98;
	
}
