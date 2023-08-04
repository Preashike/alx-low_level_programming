#include "main.h"

/**
 * _isalpha - is alphabet by @siewe
 *
 * @c: c is the parameter
 *
 * Description: check for alphabet
 *
 * Return: 1 if it is a letter, lowercase or uppercase else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
