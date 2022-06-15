#include "main.h"
/**
 * print_sign - Function that prints sign of a number.
 * @c : numbeer int.
 * Description: 'prints "+", "-" or 0 depending on the number in int(c)'
 *
 * Return: Return 0
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
