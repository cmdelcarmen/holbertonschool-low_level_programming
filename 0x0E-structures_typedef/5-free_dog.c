#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - fucntion frees dogs
 * @d: pointer passed
 */
void free_dog(dog_t *d)
{
	free(d);
}
