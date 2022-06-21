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

		for (line = 1; line <= n; lines++)
		{
			for (spaces = 1; sapces < lines; spaces++)
				_putchar('0' + spaces);

			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

