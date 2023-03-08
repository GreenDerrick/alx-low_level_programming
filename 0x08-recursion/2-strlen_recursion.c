#include "main.h"
/**
 * _strlen_recursion - printing the length of a string
 *
 * @s: string to be manipulated
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}

	return (0);
}
