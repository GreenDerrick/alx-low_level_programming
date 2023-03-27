#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints contents in the d variable
 *
 * struct dog -  struct of type dog
 * @d: structure variable
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d -> name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else 
		{
			printf("Name: %s\n", d->name);
		}
		if (d -> age < 0)
		{
		}
		else
		{
			printf("Age: %f\n", d->age);
		}

		if (d -> owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n",  d -> owner);
		}
	}
}
