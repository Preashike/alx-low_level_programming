#include "main.h"

/**
 * print_line -draw straight lines
 *
 * @n: parameter
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = n; i > 0; i--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
