#include <stdio.h>
/**
 * main - check the code
 *
 * Return: 0 Always
 */
int main(void)
{
	int n; 
	int *p;

	n = 402;
	p = &n;

	printf("Address of n: %p\n", &n);
	printf("Value of p: %d\n", *p);	
	*p = 98;
	printf("Address  of *p: %d\n", *p);
	printf("Addres of n ; %p\n", &*p);
	return (0);
}
