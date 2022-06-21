#include <ctype.h>
#include "main.h"

/**
 * main - Entry function.
 * Description : Function that fizz, buzz or FizzBuzz depends of the multiplo.
 */

void main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{

		if (number % 5 == 0 && number % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			if (number % 3 == 0)
			{
				printf("Fizz");
			}
			else if (number % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d", number)
			}
		}
		if (number != 100)
		{
			printf(" ");
		}
	}
}

