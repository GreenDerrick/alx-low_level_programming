#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function to print dog
 * @d: variable
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if(d->name == NULL || d->owner == NULL)
		printf("nil");
	printf("%s\n",d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}
