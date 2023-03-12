#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - contains the *argv[] and argc
 *
 * @argv: this is the argument vector, it return the pointer to the arguments
 * @argc: thi is the argument count, it will return th
 * Return: 0 Always
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
