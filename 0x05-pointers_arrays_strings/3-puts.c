#include "main.h"
/**
 * _puts - print a string
 *
 * @str: variable
 */
void _puts(char *str)
{
	int number;

	for(number = 0; str[number] != str['\0']; number++)
	{
	}
	
	int num2;
	for (num2 = 0; num2 <= number; num2++)
	{
		_putchar(str[num2]);
	}
	_putchar('/n');
}
