#include "main.h"
/**
 * _puts - print a string
 *
 * @str: variable
 */
void _puts(char *str)
{
	int number;

	//for (number = 0; str[number] != str['\0']; number++)
	//{
//	}
	
	number = 0;

	while (str[number] != str['\0'])
	{
		_putchar(str);
		number++;
	}
}
