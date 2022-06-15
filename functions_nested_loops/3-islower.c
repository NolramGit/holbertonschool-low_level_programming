#include "main.h"
#include <ctype.h>
/**
 * _islower - Function that checks if letter is lowercase.
 * @c : letra char.
 * Description: 'Return if letter is lowercase or not'
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
