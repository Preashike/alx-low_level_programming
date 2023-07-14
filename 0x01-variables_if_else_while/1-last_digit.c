#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - last digit of a number
 *
 * Description: print last digit of a number
 *
 * Return: >5 (greater than five), 0 (is 0),<6 (less than 6)
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}

	return (0);
}
}
