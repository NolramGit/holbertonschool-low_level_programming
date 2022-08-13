#include "main.h"

/**
 * sqr_aux_recursion - Auxiliar function for sqrt_recursion
 * @n: int
 * @i: int
 * Return: 0
 */

int sqr_aux_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i < n)
		return (aux(n, i + 1));
	return (-1);
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: int
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	return (sqr_aux_recursion(n, i));
}
