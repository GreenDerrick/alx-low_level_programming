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
		if (digit == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
