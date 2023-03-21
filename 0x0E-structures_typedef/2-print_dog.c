#include "main.h"
#include "dog.h"
#include <stdio.h>
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
		return ("");
	if(d.name == NULL)
		return('nil');
}
