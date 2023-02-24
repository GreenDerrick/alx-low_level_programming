#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - this is the checker for a number
 *
 * Return: 1 (if number)
 *
 * int c - this is type c
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
