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
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
