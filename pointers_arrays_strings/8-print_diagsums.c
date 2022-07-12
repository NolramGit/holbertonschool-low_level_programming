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
	int i = 0; sumA = 0, sumB = 0, length = size * size;

	while (i < len)
	{
		if (i % (size - 1) == 0 && i < length - 1 && i > 0)
			sumA += *(a + i);
		if (i % (size + 1) == 0 || i == 0)
			sumB += *(a + i);
		i++;
	}
	printf("%d, %d\n", sumA, sumB);
}
