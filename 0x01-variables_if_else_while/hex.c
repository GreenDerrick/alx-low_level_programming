#include <stdio.h>
int  main(void)
{
	int hex = 0xaf;
	int a = 'D';
	int b = isxdigit(a);
	printf("%x", hex);
	return (0);
}
