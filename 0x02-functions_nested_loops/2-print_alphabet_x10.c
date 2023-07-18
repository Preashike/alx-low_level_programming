#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	while (i <= 9)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
