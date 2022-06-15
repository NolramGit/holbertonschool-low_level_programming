#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Function entry point.
 * @c : letra char.
 * Description: 'prints the last digit of a number.'
 *
 * Return: last digit.
 */

int print_last_digit(int c)
{
	return (_putchar(abs(c) % 10));
}
