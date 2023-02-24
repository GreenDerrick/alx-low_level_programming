#include "main.h"
#include <stdio.h>
/**
 * main- this is the main function
 * more_numbers - Print numbers from 0 to 14
 *
 * main - main function
 * Return: 0 Always
 */
void more_numbers(void)
{
	int number = 0;

	while (number < 14)
	{
		_putchar(('0' + number) * 10);
		number++;
	}
}
