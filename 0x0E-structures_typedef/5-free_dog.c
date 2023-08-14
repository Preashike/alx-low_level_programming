#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory allocated to a dog function
 *
 * @d: dog_t type parameter
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
