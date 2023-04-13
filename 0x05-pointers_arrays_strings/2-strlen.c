#include "main.h"
/**
 * _strlen -  function to get the length of a string
 *
 * @s: variable to be manipulated
 * Return: the number of characters in a string
 */

int _strlen(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	_putchar(len + '0');
}

