#include "main.h"

/**
 *
 * _strspn - get the length of a prefix substring
 * @s: string to search from
 * @accept: string to search
 * Return: number of characters matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r] ; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
		}
			else if (accept[r + 1] == '\0')
				return (n);
		}
	}
	return (0);
}
