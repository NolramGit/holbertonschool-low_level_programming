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
	return (write(1, abs(c) % 10, 1));
}
