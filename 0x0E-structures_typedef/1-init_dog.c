#include "main.h"
#include <stdlib.h>
/**
 * init_dog - initialize contents in the structure
 *
 * @d: pointer variable
 * @name: pointer variable
 * @age: age variable
 * @owner: owner pointer variable
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
