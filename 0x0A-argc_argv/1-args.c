#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: argument counter, holds the number of arguments passed
 * @argv: argument vector, holds the value of the arguments
 * Return: 0 always
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int i;

	for (i = 0; i <= argc; i++)
	{
	}
	printf("%d\n", i - 2);
	return (0);
}
