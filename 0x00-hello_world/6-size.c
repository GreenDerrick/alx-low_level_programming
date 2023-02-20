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

	printf("Size of char: %zu byte(s)\n", character);
	printf("Size of int: %zu byte(s)\n", number);
	printf("Size of long int %zu byte(s)\n", numbers);
	printf("Size of long long int: %zu byte(s)\n", numbering);
	printf("Size of a float: %zu byte(s)\n", floating);

	return (0);
}
