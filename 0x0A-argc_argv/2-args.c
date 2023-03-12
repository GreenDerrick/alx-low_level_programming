#include <stdlib.h>
#include <stdio.h>

/**
 * main - this is the main function
 *
 * @argc: argument count initialized as an int
 * @argv: argument vector initialized as a character pointer
 *
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
