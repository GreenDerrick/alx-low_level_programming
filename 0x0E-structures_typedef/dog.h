#ifndef DOG_H
#define DOG_H
/**
 * struct dog -  struct of type dog
 *
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
#endif
