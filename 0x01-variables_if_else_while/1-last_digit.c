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
	int first = n % 10;
	int last = n /= 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is greater than 0\n", n, last);
	} else if (n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
