#include <stdio.h>

/**
 * main - digits from 0 to 10
 *
 * Description: print all digits from 0 to 10
 *
 * Return: o on Success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');

	return (0);
}
