#include <ctype.h>
#include "main.h"

/**
 * more_numbers - Entry function.
 * Description : Function that prints the numbers 0 to 14 10 times.
 */

void more_numbers(void)
{
	int number;
	int times;

	for (times = 0;  times <= 10 ; times++)
	{
		for (number = 0; number <= 14 ; number++)
		{
			_putchar('0' + number);
			if (number == 14)
				_putchar(10);
		}
		_putchar(10);
	}
}

