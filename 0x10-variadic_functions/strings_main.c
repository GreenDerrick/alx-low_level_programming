#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int main(void)
{
	print_strings(", ", 2, "Hello","how ar", "Django");
	return (0);
}
