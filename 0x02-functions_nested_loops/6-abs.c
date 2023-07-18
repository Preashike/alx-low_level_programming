#include "main.h"

/**
 * _abs - absolute number @siewe
 *
 * @n: parameter
 *
 * Description: computes the absolute value of an integer.
 *
 * Return: 0 on success
 */

int _abs(int n)
{
	if (n <= -1)
	{
		n = (-1) * n;
	}
	return (n);
}
