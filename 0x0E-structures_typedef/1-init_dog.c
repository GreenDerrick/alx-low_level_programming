#include "main.h"
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  initialize a variable of a struct
 *
 * struct dog - struct of type dog
 * @d: pointer variable that stores the data for struct
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age =  age;
		d->owner = owner;
	}
}
