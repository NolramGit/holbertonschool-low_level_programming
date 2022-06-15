#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: 'Prints _putchar whit function'
 *
 * Return: Return 0
 */

void print_alphabet_x10(void)
{
	int n = 1;

	for (; n <= 10; n++)
	{
		int ltr = 97;

		for (; ltr <= 122; ltr++)
			_putchar(ltr);

		_putchar(10);
	}
}
