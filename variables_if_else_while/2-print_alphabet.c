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

	for (; ascii <= 122; ascii++)
	{
		putchar(ascii);
	}
	putchar(10);
	return (0);
}
