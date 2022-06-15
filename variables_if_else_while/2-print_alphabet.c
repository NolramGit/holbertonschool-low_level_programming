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
	int ascii = 97;

	while (ascii <= 122)
	{
		putchar(ascii);
		ascii++;
	}
	return (0);
}
