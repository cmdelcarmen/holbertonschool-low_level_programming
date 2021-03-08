#ifndef DOG_H
#define DOG_H

#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
