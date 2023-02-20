#include <stdio.h>
/**
 * main-Entry point
 * print type of data types
 *
 * Return:0 (Always)
 */
int main(void)
{
	int number = sizeof(number);
	char character = sizeof(character);
	long int numbers = sizeof(numbers);
	long long int numbering = sizeof(numbering);
	float floating = sizeof(floating);

	printf("Size of char: %d byte(s)\n", character);
	printf("Size of int: %d byte(s)\n", number);
	printf("size of long int %ld byte(s)\n", numbers);
	printf("Size of long long int: %lld byte(s)\n", numbering);
	printf("Size of a float: %f byte(s)\n", floating);

	return (0);
}
