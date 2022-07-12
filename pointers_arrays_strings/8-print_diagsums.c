#include "main.h"

/**
 * print_diagsums - Entry function.
 * Description: Funtion that prints the sum of the two diagonals of a square matrix of integers
 *
 * @a: integer.
 * @size: size integer
 *
 * Return: 0
 */


void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;
	int len;

	i = 0;
	sum1 = sum2 = 0;
	len = size * size;
	while (i < len)
	{
		if (i % (size - 1) == 0 && i < len - 1 && i > 0)
			sum2 += *(a + i);
		if (i % (size + 1) == 0 || i == 0)
			sum1 += *(a + i);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
