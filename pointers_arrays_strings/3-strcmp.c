#include "main.h"

/**
 *  _strcmp - Entry function
 *
 * Description: Function that compare two strings.
 *
 * @s1: pointer string
 * @s2: pointer string
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, str1 = 0, str2 = 0;

	while (s1[str1] != 0)
	{
		str1++;
	}
	while (s2[str2] != 0)
	{
		str2++;
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (str1 > str2)
	{
		return (s1[str2]);
	}
	else if (str1 < str2)
	{
		return (s2[str1] * -1);
	}
	return (0);
}
