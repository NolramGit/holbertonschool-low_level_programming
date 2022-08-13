#include "main.h"

/**
 * aux_prime - Auxiliar function for is_prime
 * @n: int
 * @i: int
 * Return: 0
 */

int aux_prime(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0);
	if (i < n)
		return (aux(n, i + 1));
	return (1);
}

/**
 * is_prime_number - Entry point
 * @n: int
 * Return: 0
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 1)
		return (0);
	return (aux_prime(n, i));
}
