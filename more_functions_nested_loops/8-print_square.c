#include <ctype.h>
#include "main.h"

/**
 * print_square - Entry function.
 * Description : Function that prints a square in terminal.
 * @size: represent the size of the square.
 */

void print_square(int size)
{
	int sq_width;
	int sq_height;

	if (n > 0)
	{

		for (sq_height = 1; sq_height <= n; sq_height++)
		{
			for (sq_width = 1; sq_width <= n; sq_width++)
				_putchar(35);

			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

