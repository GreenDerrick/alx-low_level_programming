#include "main.h"
/**
 * _isalpha - checks for alphabets in a sequence
 *
 * @c: variable return
 */
int _isalpha(int c)
{
	int alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
		{
			continue;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}

	return (0);
}
