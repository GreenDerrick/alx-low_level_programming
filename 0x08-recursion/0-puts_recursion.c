#include "main.h"
/**
 * _puts_recursion -  print eache character in a string s
 * @s: the string to be manipulated
 *
 * Return: none
 */
void _puts_recursion(char *s)
{
	int i;
	int len;

	if(*s != '\0')
	{
		return 1 + _puts_recursion(s + i);
	}
}
