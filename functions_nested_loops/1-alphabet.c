#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: 'Prints _putchar whit function'
 *
 * Return: Return 0
 */

void print_alphabet(void)
{
	int ltr = 97;

	for (; ltr <= 122; ltr++)
		_putchar(ltr);


	_putchar('\n');
}
