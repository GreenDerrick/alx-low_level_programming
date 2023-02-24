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
	int more;

	for (more = 0; more <= 14; more++)
	{
		_putchar((more) * 10);
	}
}
