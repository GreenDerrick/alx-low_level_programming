#include "main.h"
#include <stdio.h>
/**
 * main - main function
 *
 * @argc: argument counter, holds number of arguments
 * @argv: argument vector, holds arguments in the function
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	i = 0;
	printf("%s\n", argv[i]);
	return (0);
}
