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

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

