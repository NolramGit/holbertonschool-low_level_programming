#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Entry function
 * Description: change value of a pointer
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int *pointer = &n;
	*pointer = 98;
}
