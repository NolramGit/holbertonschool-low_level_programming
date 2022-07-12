#include "main.h"

/**
 * _strpbrk - Entry function.
 * Description: Funtion that searches a string for any of a set of bytes
 *
 * @s: char pointer
 * @accept: char pointer
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;
	char *str;

	while (s[i] != 0)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
				str = &s[i];
				return (str);
			}
			j++;
		}
		i++;
	}
	return (0);
}
