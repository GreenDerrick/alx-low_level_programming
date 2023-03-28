#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct dog
	{
		char *name;
		char *owner;
	};

	struct dog *woof;

	woof = malloc(sizeof(struct dog));
	
	if(woof != NULL)
	{
		printf("Not null\n");
		printf("%s\n", woof->name = "hello");
	}
	else
	{
		printf("It is null\n");
	}
	return (0);
}

