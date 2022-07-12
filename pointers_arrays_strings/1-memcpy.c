#include "main.h"

/**
 * _memcpy - Entry function.
 * Description: Funtion that copies memory area.
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned integer
 *
 * Return: pointer s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
