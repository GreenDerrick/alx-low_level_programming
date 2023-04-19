#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts_half - function that prints half the strings provided
 *
 * @str: variable to be  manipulated
 * Return: nothing to return
 */
int _len(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	return (len);
}

void puts_half(char *str)
{
	int i;
	int half;

	half = ((_len(str)) - 1) / 2;
	
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}

int main(void)
{
	puts_half("123456789");
	return (0);
}
