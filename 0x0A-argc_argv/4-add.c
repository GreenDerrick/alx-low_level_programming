#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function to add the arguments in the argument vector
 *
 * @argc: argument integer variable
 * @argv: argument vector holds contents of the argument
 *
 * Return : 0 if no digits are passed
 */

int main(int argc, char **argv)
{
	int i;
	int add;

	i = 1;

	while (i < argc)
	{
		add = atoi(argv[i]) + atoi(argv[i + 1]);
		printf("%d\n", add);
		i++;
	}
	return (0);
}
