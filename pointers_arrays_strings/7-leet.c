#include "main.h"

/**
 * leet - Entry function
 *
 * Description: Function that encodes string into 1337/leet
 *
 * @str: pointer string
 *
 * Return: Always 0.
 */

char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (letters[j] == *(str + i))
				*(str + i) = numbers[j];
		}
	}
	return (str);
}
