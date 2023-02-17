#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:0 (Always)
 */

/* more headers goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	float first = n % 10;
	float last = n /= 10;

	if (n > 5)
	{
		printf("Last digit of %d is %f and is greater than 5\n", n, first);
	} else if (n == 0)
	{
		printf("Last digit of %d is %f and is greater than 0\n", n, first);
	} else if (n < 6)
	{
		printf("Last digit of %d is %f and is less than 6 and not 0\n", n, first);
	}
	return (0);
}
