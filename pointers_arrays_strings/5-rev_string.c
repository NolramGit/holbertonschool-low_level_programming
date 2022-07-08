#include "main.h"
#include <string.h>
/**
 * rev_string - Entry function
 *
 * Description: Function that reverses a string.
 *
 * @s: pointer string.
 *
 */

void rev_string(char *s)
{
	char str[500];
	int i, j;

	i = 0;
	while (*(s + i) != 0)
	{
		str[i] = *(s + i);
		i++;
	}
	j = i - 1;
	i = 0;
	while (j >= 0)
	{
		*(s + r) = str[i];
		j--;
		i++;
	}
}
