#include <stdio.h>
/**
 * main - Print all hexadecimals
 *
 * Return :0 (Always)
 */

int main(void)
{
	long int num;

	for(num = 0; num <= 15; num++)
	{
		for (num = 0; num <= 9; num++)
		{
		putchar(num);
		putchar('\n');
		}
		for (num = 10; num <= 15; num++)
		{
			putchar(num);
			putchar('\n');
	}

	}
	return (0);
}

