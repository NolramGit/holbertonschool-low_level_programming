#include "main.h"

/**
 * _strspn - Entry function.
 * Description: Funtion that gets the length of a prefix substring.
 *
 * @s: char pointer
 * @accept: char pointer
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;

	while (s[i] != 0)
	{
		j = 0;
		l = 0;
		while (accept[j] != 0)
		{
			if (s[i] != accept[j])
			{
				j++;
			}
			else if (s[i] == accept[j])
			{
				j++;
				k++;
				l++;
			}
		}
		if (l == 0)
			return (k);
		i++;
	}
	return (k);
}

