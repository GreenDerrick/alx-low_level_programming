#include "main.h"
#include <stdio.h>

/**
 * main - function to run the programs
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	n = 402;
	printf("Before dereferencing n = : %d\n", n);
	reset_to_98(&n);
	printf("After dereferencing n = :%d\n", n);
	return (0);
}
