#include "main.h"
#include <stdio.h>
int main(void)
{
	int p;
	int b;
	p = 402;

	reset(&p);
	printf("Address of n is : %p\n", &p);

	return (0);
}
