#include "main.h"

/**
 * print_to_98 - Function entry.
 *
 * @n: number that  init sequence.
 * Description: 'Prints a number sequece to 98'
 *
 * Return: Return 0
 */

void print_to_98(int n)
{
	int number = 0;
	int result = 0;

	if (number < 99)
	{
		for (number = n; number <= 98; number++)
		{
			if (number < 0)
			{
				_putchar(45);
				if (number < -9)
				{
					_putchar('0' + (number * -1) / 10);
				}
				_putchar('0' + (number * -1) % 10);
			}
			else
			{
				if (number > 9)
				{
					_putchar('0' + number / 10);
				}
				_putchar('0' + number % 10);
			}
			if (number < 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
	else
	{
		for (number = n; number >= 98 ; number--)
		{
			if (number < 100)
			{
				_putchar('0' + number / 10);
				_putchar('0' + number % 10);
			}
			else
			{
				result = number / 10;
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
				_putchar('0' + number % 10);
			}
			if(number > 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
