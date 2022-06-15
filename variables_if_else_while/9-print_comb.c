#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Prints message whit puts function
 *
 * Return: Return 0
 */
int main(void)
{
	int n = 48;

	for (; n <= 57; n++)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
