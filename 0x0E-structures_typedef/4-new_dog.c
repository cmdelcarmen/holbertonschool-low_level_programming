#include "dog.h"
#include <stdlib.h>

int getLength(char *s1);

/**
 * *new_dog - function creates a new dog
 * @name: pointer
 * @age: pointer
 * @owner: pointer
 * Return: NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int arrayLength1, arrayLength2, count;

	arrayLength1 = getLength(name);
	arrayLength2 = getLength(owner);

	newDog = (dog_t *)malloc(sizeof(dog_t));
		if (newDog == NULL)
		{
			return (NULL);
		}
	(*newDog).name = malloc((sizeof(char) * arrayLength1) + 1);
		if ((*newDog).name == NULL)
		{
			free(newDog);
			return (NULL);
		}
	(*newDog).owner = malloc((sizeof(char) * arrayLength2) + 1);
		if ((*newDog).owner == NULL)
		{
			free(newDog);
			return (NULL);
		};

		for (count = 0; name[count] != '\0'; count++)
		{
			(*newDog).name[count] = name[count];
		}
		(*newDog).name[count] = '\0';

		for (count = 0; owner[count] != '\0'; count++)
		{
			(*newDog).owner[count] = owner[count];
		}
		(*newDog).owner[count] = '\0';

		(*newDog).age = age;

	return (newDog);
}

/**
 * getLength - function gets length of array
 * @s: char array passed
 * Return: arrayLength
 */
int getLength(char *s)
{
	int count, arrayLength = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		arrayLength++;
	}
	return (arrayLength);
}
