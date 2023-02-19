#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a = 1;
	int b = 10;
	int i;

	for ( i = 0; i < b; i++)
	{
		int num = (rand() % (a + 1 )) + a;
        	printf("%d ", num);


}
return (0);
}
