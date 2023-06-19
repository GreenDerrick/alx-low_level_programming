#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - -function to populate the struct values
 * @d: name of struct
 * @name: name variable
 * @age: age variabe
 * @owner: owner variable
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	name = d->name;
	age = d->age;
	owner = d->owner;
}
