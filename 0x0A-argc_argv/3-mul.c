#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * @argc: argument counter, holds the number of arguments
 * @argv: argument vector, holds the value of the arguments
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	int i;
	int product;

	for (i = 0; i < argc; i++)
	{
		if (argc < 3)
		{
			printf("Error\n");
			return (1);
		}
		product = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", product);
	return (0);
}
