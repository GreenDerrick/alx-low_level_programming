#include "main.h"
/**
 * print_most_numbers - function to print numbers
 *
 */
void print_most_numbers(void)
{
	int a;
	a = 0;
	
	while (a < 10)
	{
		if(a == 2 || a == 4)
		{
			continue;
		}
		_putchar(a);
		a++;
	}
}
