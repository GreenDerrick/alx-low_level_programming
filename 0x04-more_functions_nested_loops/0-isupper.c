#include <stdio.h>
#include "main.h"
/**
 * main- see if the function will function
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int c = 'a';

	int _isupper(int c)
	{
		if (c >= 'A' && c <= 'Z')
			return (1);
		else
			return (0);
	}
	return (0);
}
