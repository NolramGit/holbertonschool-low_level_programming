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
	for (int ltr = 97; ltr <= 122; ltr++)
	{
		putchar(ltr);
	}
	for (int ltr = 65; ltr <= 90; ltr++)
	{
		putchar(ltr);
	}
	putchar(10);
	return (0);
}

