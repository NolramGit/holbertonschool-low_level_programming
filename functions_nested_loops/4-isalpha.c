#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Function that checks if argument is a letter.
 * @c : letra char.
 * Description: 'if argument is letter return 1 else return 0'
 *
 * Return: Return 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
