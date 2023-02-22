#include "main.h"

/**
 * main - print alphabet in lowercase followed by a new line
 *
 * Return:0 (Always)
 */
int main(void)
{
	char alpha;
	for (alpha = 'a'; alpha <='z'; alpha++)
	{
		_putchar(alpha);
		_putchar('\n');
	}
	return (0);
}
