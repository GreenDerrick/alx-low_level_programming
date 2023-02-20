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
	printf("Size of char: %c\n", character);
	printf("Size of int: %d\n", number);
	printf("size of long int %ld\n", numbers);
	printf("Size of long long int: %lld\n", numbering);
	printf("Size of a float: %f\n", floating);

	return (0);
}
