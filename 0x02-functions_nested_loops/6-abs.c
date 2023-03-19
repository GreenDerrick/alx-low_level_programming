#include "main.h"
/**
 * _abs - function to process the absolute value
 *
 * Return: 0 always
 */

int _abs(int i)
{
	int val;

	if (i < 0)
	{
		val = i * (-1);
		return (val);
	}
	return (i);
}		
