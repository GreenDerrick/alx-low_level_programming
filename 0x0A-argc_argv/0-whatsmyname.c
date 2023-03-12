#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - contains the *argv[] and argc
 *
 * @argv - this is the argument vector, it return the pointer to the arguments
 * @argc - thi is the argument count, it will return the number of arguments that has been passed
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

