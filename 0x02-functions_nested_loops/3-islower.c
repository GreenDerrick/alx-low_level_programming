#include "main.h"
/**
 * _islower - check for lower case characters c
 * 
 * @c: variable to be manipulated
 *
 * Return : 1 if true and 0 if otherwise
 */
int _islower(int c)
{
	while(c <= 'z' && c >= 'a')
	{
		_putchar('1');
	}
	_putchar(0);

	return(0);
}

