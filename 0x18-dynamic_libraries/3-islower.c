#include "main.h"

/**
 * _islower - lower character
 *
 * @c: c is the scii character
 *
 * Description: check that a character is lowercase
 *
 * Return: 1 if lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
