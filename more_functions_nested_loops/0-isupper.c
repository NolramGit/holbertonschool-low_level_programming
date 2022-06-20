#include <ctype.h>
#include "main.h"

/**
 * _isupper - Entry function.
 * Description : Function that checks if character  is uppercase
 * @c: character
 * Return: Always 0.
 */

int _isupper(int c)
{
	char letter = c;
	return (isupper(letter));
}

