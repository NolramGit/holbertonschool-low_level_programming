#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * print_last_digit - Function entry point.
 * @c : letra char.
 * Description: 'prints the last digit of a number.'
 *
 * Return: last digit.
 */

int print_last_digit(int c)
{
	int absN = abs(c) % 10;
	_putchar('0' + absN);
	return absN;
}
