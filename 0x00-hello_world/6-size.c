#include <stdio.h>
/**
 * main-Entry point
 * print type of data types
 *
 * Return:0 (Always)
 */
int main(void)
{
	int number = sizeof(int);
	char character = sizeof(char);
	long int numbers = sizeof(long int);
	long long int numbering = sizeof(long long int);
	float floating = sizeof(float);

	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	
	return (0);
}
