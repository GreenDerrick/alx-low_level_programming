#include "main.h"
/**
 * main - check the coede
 *
 * Return: 0 Always
 */
int main(void)
{
	int a;
	int b;
	
	a = 40;
	b = 50;

	swap_int(&a, &b);

	b = a;
	a = b;

	swap_int(&a, &b);
	return (0);
}
