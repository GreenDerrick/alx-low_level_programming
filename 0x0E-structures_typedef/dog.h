#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdlib.h>
/**
 * struct dog - structures
 * @name: variable
 * @age: variable
 * @owner: variable
 *
 * Description: this is a struct to contain dogs details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
#endif
