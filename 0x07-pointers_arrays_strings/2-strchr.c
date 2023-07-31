#include "main.h"

/**
 * 2- strchr.c - locates character in a string
 * @s: string to search
 * @c: character to search in s
 * Returns: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
