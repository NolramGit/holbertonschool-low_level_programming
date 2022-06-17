#include "main.h"

/**
 * times_table - Function entry
 *
 * Description: 'Prints a times table 0-9'
 *
 * Return: Return 0
 */

void times_table(void)
{
	int a = 0;
	int b = 0;
	int result = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			if (result < 10 && b > 0)
			{
				_putchar(32);
			}
			if (result >= 10)
			{
				_putchar('0' + result / 10);
			}
			_putchar('0' + result % 10);
			if (b < 9)
			{
				_putchar(44);
			}
			if (b >= 0 && b < 9)
			{
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
