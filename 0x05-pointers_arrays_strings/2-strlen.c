#include "main.h"
#include "_putchar.c"
/**
 * _strlen - get string length
 *
 * @s: variable to be tested
 */
int _strlen(char *s)
{
	int number;

	for (number = 0; s[number] != '\0'; number++)
	{
		_putchar(number + '0');
	}
	return (number);	
}