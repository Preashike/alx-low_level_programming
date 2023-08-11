#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string to append to.
 * @s2: string to be concatenated from.
 * @n: number of bytes.
 *
 * Return: NULL if fail, else pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	ptr = malloc(lsout + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - ls1];

	ptr[i] = '\0';

	return (ptr);
}
