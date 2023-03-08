#include "main.h"
/**
 * _puts_recursion -  print eache character in a string s
 * @s: the string to be manipulated
 *
 * Return: none
 */
int len(char *s)
{
	if(*s != '\0')
		return 1 + len(s + 1);
}

void _puts_recursion(char *s)
{
	int i;
	int length;
	
	length = len(s);
	
	for (i = 0; i <= length; i++)
		_putchar(s);
}
