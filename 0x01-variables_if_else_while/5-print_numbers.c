#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int alpha;

	for (alpha = 0 ; alpha < 10 ; alpha++)
	{
		putchar((alpha % 10) + '0');
	}
	putchar('\n');
return (0);
}

