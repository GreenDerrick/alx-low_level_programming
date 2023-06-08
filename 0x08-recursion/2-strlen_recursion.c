#include "main.h"
/**
 * _strlen_recursion - function that outputs the length of a string
 *
 * @s: variable to be manipuated
 * Return: number
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
