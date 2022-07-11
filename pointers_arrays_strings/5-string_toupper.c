#include "main.h"

/**
 * *string_toupper - Entry function
 *
 * Description: Function that changes all lowercase letters to uppercase.
 *
 * @str: pointer string
 *
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (s);
}
