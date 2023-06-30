#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int add;
	int i;

	add = 0;

	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i])) >= 0 && (atoi(argv[i])) <= 1000000000)
		{
			add = add + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
