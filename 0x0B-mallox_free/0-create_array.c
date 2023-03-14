#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	int i;
	int *p;

	p = malloc(sizeof(char) * size);

	if(p == NULL)
		return (0);

	for (i = 0; i <= size; i++)
		c = p[i]
	
}

