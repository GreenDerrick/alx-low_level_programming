#include <stdio.h>

/**
 * reset - resets the pointer value to 98;
 *
 * @c: is the variable to be mainpulated
 */

void reset(int *b)
{
	int a;
	b = &a;
	a = 402;
	b = &a;

	printf("The value of 'a' is : %d\n", a);
	printf("The address of 'a' is: %p\n", &a);
}
