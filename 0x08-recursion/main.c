#include <stdio.h>
#include "main.h"

int main(void)
{
	int n;
	int m;
	n = -98;
	m = 12;
	factorial(n);
	printf("%d\n", factorial(n));
	printf("%d\n", factorial(m));
	return (0);
}
