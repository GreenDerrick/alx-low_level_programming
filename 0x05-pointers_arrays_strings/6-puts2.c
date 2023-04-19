#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * puts2 - function to print all alternate characters
 *
 * @str: variable to be manipulated
 * Return:nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}

int main(void)
{
	char *str;

	str = "0123456789";
	puts2(str);
	return (0);
}
