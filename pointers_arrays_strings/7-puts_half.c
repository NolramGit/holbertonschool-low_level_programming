#include "main.h"
/**
 * puts_half - Entry function.
 *
 * Description: Function that print half of a string.
 *
 * @str: string char.
 *
 * Return: 0.
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2 == 0)
		i /= 2;
	else
	{
		j = (i - 1) / 2;
		i -= j;
	}
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
