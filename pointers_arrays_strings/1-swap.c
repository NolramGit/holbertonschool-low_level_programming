#include "main.h"

/**
 * swap_int - Entry function
 *
 * Description: swap the values of two pointers
 *
 * @a: pointer.
 * @b: pointer.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
