#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include "dog.h"

int main(void)
{
	struct dog woof;
	printf("%s\n", woof.name = "Hello");
	init_dog(&woof, "hello", 3.5, "Me");

	return (0);
}
