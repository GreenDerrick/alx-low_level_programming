#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

struct point
{
	int x;
	int y;
};
struct point my_point = {3, 7};
struct point *p = &my_point;

int main(void)
{
	my_point.y = `98;
	return (0);
}
