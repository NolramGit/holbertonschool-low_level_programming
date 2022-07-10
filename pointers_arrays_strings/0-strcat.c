#include "main.h"
#include <stdio.h>

/**
 *  *_strcat - Entry function
 *
 * Description: Function that concatenates two strings.
 *
 * @dest: pointer string
 * @src: pointer string
 *
 * Return: Always 0.
 */
void *_strcat(char *dest, char *src)
{
	int str1 = 0, str2 = 0, length;

	while (dest[str1] != '\0')
	{
		str1++;
	}
	while (src[l2] != '\0')
	{
		l2++;
	}
	length = l2;
	str2 = 0;
	while (str2 < length)
	{
		dest[str1] = src[str2];
		str1++;
		str2++;
	}
	return (dest);
}
