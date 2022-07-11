#include "main.h"

/**
 * reverse_array - Entry function
 *
 * Description: Function that reverse elemnts of an array.
 *
 * @a: pointer array
 * @n: pointer int
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmpr;

	while (i < n)
	{
		tmpr[i] = a[i];
		i++;
	}
	n--;
	i = 0;
	while (n >= 0)
	{
		a[n] = tmpr[i];
		n--;
		i++;
	}
}
