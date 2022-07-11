#include "main.h"
#include <stdio.h>

/**
 *  *_strncat - Entry function
 *
 * Description: Function that concatenates two strings of n.
 *
 * @dest: pointer string
 * @src: pointer string
 * @n: n string.
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int str1 = 0, str2 = 0, length;

	while (dest[str1] != '\0')
	{
		str1++;
	}
	while (src[str2] != '\0')
	{
		str2++;
	}
	length = str2;
	str2 = 0;
	while (str2 < length && str2 < n)
	{
		dest[str1] = src[str2];
		str1++;
		str2++;
	}
	return (dest);
}
