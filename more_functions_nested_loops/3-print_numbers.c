#include <ctype.h>
#include "main.h"

/**
 * _isupper - Entry function.
 * Description : Function that prints the numbers 0 to 9.
 * Return: Always 0.
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9 ; number++)
	{
		_putchar('0' + number);
	}
	_putchar(10);
	return (0);
}

