#include <stdio.h>
#include <limits.h>
#include "main.h"
int main(void)
{
	int *i;

	i = malloc_checked(20);
	printf("%p\n", (void *)i);

	return (0);
}
