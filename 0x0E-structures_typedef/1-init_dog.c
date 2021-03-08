#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function initializes struct
 * @d: pointer to struct
 * @name: pointer to name
 * @age: the dog's age
 * @owner: pointer to owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
