#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void print(char *name)
{
	printf("Hello my name is %s\n", name);
}

int main(void)
{
	print_name("Bob", NULL);
	print_name("Bob Dylan", &print);
	print_name("I am Bob", &print);
	return (0);
}
