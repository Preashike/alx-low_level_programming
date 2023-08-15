#include "dog.h"

/**
 * init_dog - initialize struct dog
 *
 * @d: param of struct dog type
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: nothing
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
