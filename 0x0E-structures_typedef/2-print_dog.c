/**
 * struct dog - structure of type dog
 *
 * @name: name varibale
 * @age: age variable
 * @owner: owner variable
 */
struct dog
{
	char *name;
	int age;
	char *owner;
};

#include "main.h"
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
		printf(" ");
	if(d->name == NULL)
		printf("Name: (nil)");
	if(d->owner == NULL)
		printf("Owner: (nil)");
	if(d->age == 0)
		printf("Age: (nil)");
	
	printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner);
}
