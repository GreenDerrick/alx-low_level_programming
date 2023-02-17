#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha <= 'a'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
