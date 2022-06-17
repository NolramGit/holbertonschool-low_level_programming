#include "main.h"

/**
 * jack_bauer - Function entry
 *
 * Description: 'Prints a clock whit _putchar function and nested for loops'
 *
 * Return: Return 0
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	for (hours = 0; hours <= 24; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(58);
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar(10);
		}
	}
}
