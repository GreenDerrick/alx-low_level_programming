#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		putchar(alpha);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
