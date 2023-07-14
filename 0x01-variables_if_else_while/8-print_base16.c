#include <stdio.h>

/**
 * main - get all base 16 number
 *
 * Description:  prints all the numbers of base 16 in lowercase
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(48 + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');

	return (0);
}

