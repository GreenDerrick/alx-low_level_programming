#include "main.h"
/**
 * _isalpha - checks for alphabets in a sequence
 *_
 * @c: variable return
 *
 * Return: 1 if lowercase or lowercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
