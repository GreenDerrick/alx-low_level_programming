#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int reverse;

	for (reverse = 'z'; reverse > 'a'; reverse++)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
