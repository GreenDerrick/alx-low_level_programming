#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 *
 * Description: thi is a struct to contain details of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
