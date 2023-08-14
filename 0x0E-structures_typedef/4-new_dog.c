#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 *
 * @name: param
 * @age: dog age param
 * @owner:owner param
 *
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int i, dname, downer;

	nw_dog = malloc(sizeof(*nw_dog));

	if (nw_dog == NULL || !(name) || !(owner))
	{
		free(nw_dog);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;

	for (downer = 0; owner[downer]; downer++)
		;

	(*nw_dog).name = malloc(dname + 1);
	(*nw_dog).owner = malloc(downer + 1);

	if (!(nw_dog->name) || !(nw_dog->owner))
	{
		free(nw_dog->name);
		free(nw_dog->owner);
		free(nw_dog);
		return (NULL);
	}

	for (i = 0; i < dname; i++)
		nw_dog->name[i] = name[i];
	nw_dog->name[i] = '\0';

	nw_dog->age = age;

	for (i = 0; i < downer; i++)
		nw_dog->owner[i] = owner[i];
	nw_dog->owner[i] = '\0';

	return (nw_dog);
}
