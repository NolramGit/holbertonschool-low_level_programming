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
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

