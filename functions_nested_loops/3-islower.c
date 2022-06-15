#include "main.h"
#include <ctype.h>
/**
 * _islower: Function that checks if letter is lowercase.
 *
 * Description: 'Prints _putchar whit function'
 *
 * Return: Return 0
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
