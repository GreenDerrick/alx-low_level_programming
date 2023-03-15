#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function contains argument counter and argument vector
 *
 * @argv: argument vector contains strings
 * @argc: argument counter contains number of arguments passed
 * Return: 0 ALways
 */

int main(int argc, char *argv[])
{
	int i;
	int product;

	i = 3;
	if (argc == i)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	if (argc > i || argc < i)
	{
		printf("Error\n");
	}

	return (0);
}
