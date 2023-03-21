#include "main.h"
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog -  print contents in a structure
 *
 * @struct dog: struct of type dog
 * @d: pointer value struct type
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		printf("");
	if(d.name == NULL)
		printf("Name: (nil)");
	if(d.owner == NULL)
		printf("Owner: (nil)");
	if(d.age == NULL)
		printf("Age: (nil)");
	
	printf("Name: %s\n", d.name);
	printf("Age: %d\n", d.age);
	printf("Owner: %s\n", d.owner);
}
