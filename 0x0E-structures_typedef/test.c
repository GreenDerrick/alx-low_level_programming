#include <stdlib.h>
#include <stdio.h>

struct dog
{
	char *name;
	int age;
};

int main(void)
{
	struct dog Dog;

	Dog.name = "name of Dog";
	Dog.age =  12;
	printf("%s\n", Dog.name);

	return (0);
}
