#include <stdio.h>

/**
 * main - combination of all single digit
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: 0 on Success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i < 9)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
