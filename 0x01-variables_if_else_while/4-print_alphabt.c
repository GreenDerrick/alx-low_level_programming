#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if(a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	return (0);
}
