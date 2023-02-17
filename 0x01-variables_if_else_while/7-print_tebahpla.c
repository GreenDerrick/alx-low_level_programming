#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int reverse;

	for (reverse = 'a'; reverse <= 'z'; reverse++)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
