#include "main.h"

/**
 * _memset - Entry function.
 * Description: Funtion that fills memory whit a constant byte.
 *
 * @s: char pointer
 * @b: char pointer
 * @n: unsigned integer
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
