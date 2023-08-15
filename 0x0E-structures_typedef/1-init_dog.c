#include "dog.h"

/**
 * init_dog - initialize struct dog
 *
 * @d: parameter of struct dog type
 * @name: pointer to a char
 * @age: dog age
 * @owner: pointer to a char parameter
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
