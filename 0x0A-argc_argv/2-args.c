#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector, holds the value of the arguments
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i <= argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
