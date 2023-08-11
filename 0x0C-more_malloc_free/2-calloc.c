#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: amount of elements
 * @size: size of element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	n = malloc(nmemb * size);
	if (n == 0)
		return (0);

	for (i = nmemb * size, ptr = n; i; i--)
		*ptr++ = 0;
	return (n);
}
