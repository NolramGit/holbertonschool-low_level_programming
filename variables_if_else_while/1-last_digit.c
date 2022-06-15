#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Prints message whit puts function
 *
 * Return: Return 0
 */
int main(void)
{
	int n;
	int modulo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	modulo = n % 10;
	if (modulo > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, modulo);
	}
	else if (modulo < 6 && modulo != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, modulo);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	return (0);
}
