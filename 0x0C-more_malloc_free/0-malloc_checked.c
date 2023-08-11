#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @c: number of bytes to check.
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int c)
{
	char *ptr;

	ptr = malloc(c);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
