#include "main.h"
#include <stdio.h>
int main(void)
{
	struct dog doggy;
	init_dog(&doggy, "name", 19, "owener");
	printf("%s\n", doggy.name);
	return (0);
}
