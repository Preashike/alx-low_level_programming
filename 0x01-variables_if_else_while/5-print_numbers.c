#include <stdio.h>

/**
 * main - all digits from 0 to 10
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 on Success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
