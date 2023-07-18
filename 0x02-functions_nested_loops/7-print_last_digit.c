#include "main.h"

/**
 * print_last_digit - last digit @siewe-rostand
 *
 * @n: parameter
 *
 * Description: print print_last_digit
 *
 * Return: n
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
