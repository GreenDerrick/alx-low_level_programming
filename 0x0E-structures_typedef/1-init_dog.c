#include "main.h"
/**
 * init_dog - function to test for struct of type dog
 * Strut dog - struct of type dog
 *
 * @d: pointer value to
 * @name: vatiable name
 * @age: years
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
}