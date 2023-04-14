#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi  - function that converts a string to a number
 *
 * @s: variable to be manipulated
 * Return: number generated
 *
 * The following algorithm needs some adjustements in the -ve and +ve signs
 */
int len(char *s)
{
	int i;
	int _len;

	for (i = 0; s[i] != '\0'; i++)
	{
		_len = i + 1;
	}
	return (_len);
}

int _atoi(char *s)
{
	int i;
	int length;
	int sign;
	int count;

	count = 0;
	length = len(s);
	printf(" Length is : %d\n", length);
	i = 0;

	for  (i  = 0; i < length; i++)
	{
		if (s[i] == '0')
		{
			s[i] == 0;
			_putchar(s[i]);
		//	continue;
		}
		else if (s[i] == '1')
		{
			_putchar(1 + '0');
		}
		else if (s[i] == '2')
		{
			_putchar (2 + '0');
		}
		else if (s[i]  == '3')
		{
			_putchar(3 + '0');
		}
		else if (s[i] == '4')
		{
			_putchar (4 + '0');
		}
		else if (s[i] == '5')
		{
			_putchar (5 + '0');
		}
		else if (s[i] == '6')
		{
			_putchar (6 + '0');
		}
		else if (s[i] == '7')
		{
			_putchar(7 + '0');
		}
		else if (s[i] == '8')
		{
			_putchar(8 + '0');
		}
		else if  (s[i] == '9')
		{
			_putchar (9 + '0');
		}
		else if (s[i] == '-')
		{
			if (s[i + 1] == '+')
			{
				_putchar('-');
				if (s[i + 2] == '-')
				{
					continue;
				} 
				else if (s[i + 2] == '+')
				{	
					_putchar('-');
				}	
				else if(s[i + 1] == '-' && s[i + 2] == '-')
				{
					continue;
				}
			}
			else if (s[i] == '+')
			{
				_putchar ('+');
			}
			_putchar('-');		
		}
		else
		{
			continue;
		}
		count = count + 1;
	}
	printf("\nLoops per string: %d\n", count);
	
	_putchar('\n');
	printf("-----------------------------------------------------------------------\n");
	return (s[i]);
}

int main(void)
{
	int nb;

	_atoi("This is my number+ 0710606786");
	_atoi("--98");
	_atoi("-402");
	_atoi("214748364");
	_atoi("Suite 402");
	_atoi("Don't hate the hacker, hate the code");
	printf("In the following output numbers have been extracted");
	_atoi("Extract the numbers in this line : 1w3e3r5r8fff89");
	return (0);
}
