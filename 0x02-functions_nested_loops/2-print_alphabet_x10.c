#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: the alphabet
 */
void print_alphabet_x10(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
