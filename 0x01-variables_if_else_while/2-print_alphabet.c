#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Description: print the alphabet in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');

	return (0);
}
