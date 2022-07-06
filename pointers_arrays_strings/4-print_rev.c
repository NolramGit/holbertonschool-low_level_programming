#include "main.h"
#include <string.h>
/**
 * _puts - Entry function
 *
 * Description: Function that returns length of two a string.
 *
 * @s: pointer.
 *
 * Return: Always 0.
 */

void _puts(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
