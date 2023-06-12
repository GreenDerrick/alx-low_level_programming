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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}