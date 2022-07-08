#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry function.
 *
 * Description: Function that prints an array.
 *
 * @a: array.
 * @n: number of elements.
 *
 * Return: 0.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
