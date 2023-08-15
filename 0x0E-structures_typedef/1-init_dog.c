#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize struct dog
 *
 * @d: parameter of struct dog type
 * @name: name of the dog
 * @age: dog age
 * @owner: pointer to a char parameter
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
