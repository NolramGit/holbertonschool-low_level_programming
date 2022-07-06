#include "main.h"
#include <string.h>
/**
 * print_rev - Entry function
 *
 * Description: Function that returns string in reverse.
 *
 * @s: String pointer.
 *
 * Return: Always 0.
 */

void print_rev(char *s)
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
