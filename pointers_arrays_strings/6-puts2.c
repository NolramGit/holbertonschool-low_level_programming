#include "main.h"
/**
 * puts2 - Entry function.
 *
 * Description: Function that print every other character of the string.
 *
 * @str: string char.
 *
 * Return: 0.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
