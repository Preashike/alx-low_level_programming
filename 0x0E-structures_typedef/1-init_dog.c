#include "dog.h"

/**
 * init_dog - initialize struct dog
 *
 * @d: para of struct dog type
 * @name: pointer to a char
 * @age: float para
 * @owner: pointer to a char para
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
