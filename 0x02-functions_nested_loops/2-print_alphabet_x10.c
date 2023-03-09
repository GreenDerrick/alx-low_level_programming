#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: the alphabet
 */
void print_alphabet_x10(void)
{
	int i;
	char s;

	i = 0;

	while (i <= 10)
	{
		s = 'a';

		while (s <= 'z')
		{
			_putchar(s);
			s++;

		}
		i++;
		_putchar('\n');
	}

}
