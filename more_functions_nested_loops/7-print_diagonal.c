#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - Entry function.
 * Description : Function that prints a diagonal line in terminal.
 * @n: represent the long of the line.
 */

void print_diagonal(int n)
{
	int spaces;
	int line;

	if (n > 0)
	{

		for (line = 1; line <= n; line++)
		{
			for (spaces = 1; spaces < line; spaces++)
				_putchar(32);

			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

