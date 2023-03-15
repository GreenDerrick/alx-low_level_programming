#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function to add the arguments in the argument vector
 *
 * @argc: argument integer variable
 * @argv: argument vector holds contents of the argument
 *
 * Return: 0 if no digits are passed
 */

int main(int argc, char **argv)
{
	int i;
	int add;

	i = 1;

	if (argc == 1)
	{
		printf("0\n");
	}

	while (i < argc)
	{
		add = atoi(argv[i]) + add;
		i++;
	}
	printf("%d\n", add);


}
