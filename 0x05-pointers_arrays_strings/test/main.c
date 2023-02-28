#include <stdio.h>
void reset(int *n)
{
}

int main(void)
{
	int p;

	p = 402;
	reset(&p);
	printf("n=%p\n", &p);
	return (0);`
}
