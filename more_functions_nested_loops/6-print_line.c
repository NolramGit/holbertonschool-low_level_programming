#include <ctype.h>
#include "main.h"

/**
 * print_line - Entry function.
 * Description : Function that prints a line in terminal.
 * @n: represent the long of the line.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar(10);
}

