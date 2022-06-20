#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - Function entry,
 *               in order separated by a comma followed by a space.
 * @n: Number start the sequence.
 * Description - Prints sequence to 98
 */
void print_to_98(int n)
{
	int number = 0;

	if (n >= 98)
	{
		for (number = n; number >= 98; number--)
		{
			printf("%d", number);
			if (number != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (number = n; number <= 98; number++)
		{
			printf("%d", number);
			if (number != 98)
			{
				printf(", ");
			}
		}
	}
}
