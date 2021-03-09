#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - function prints a struct dog
 * @d: pointer to struct passe
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	else
	{
		if ((*d).name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("(nil)\n");
		}

		if ((*d).age != NULL)
		{
			printf("Age: %f\n", (*d).age);
		}
		else
		{
			printf("(nil\n)");
		}

		if ((*d).owner != NULL)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
