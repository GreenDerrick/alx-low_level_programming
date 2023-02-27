#include <stdio.h>
#include "main.h"
#include <ctype.h>

int main(void)
{
	int r = 'a';

	if (_islower(r))
	{
		putchar('1');
		putchar('\n');
	}	else
	{
		putchar('0');
		putchar('\n');
	}
	return(0);
}
