#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Entry function.
 * Description : Function that checks if variable @c is a digit.
 * @c: variable, argument
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

