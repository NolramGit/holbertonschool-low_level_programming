#include <ctype.h>
#include "main.h"

/**
 * print_numbers - Entry function.
 * Description : Function that prints the numbers 0 to 9.
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9 ; number++)
	{
		_putchar('0' + number);
	}
	_putchar(10);
}

