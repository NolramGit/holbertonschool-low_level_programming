#include "main.h"

/**
 * _strchr - Entry function.
 * Description: Funtion that locates a character in a string.
 *
 * @s: char pointer
 * @c: char pointer
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}

