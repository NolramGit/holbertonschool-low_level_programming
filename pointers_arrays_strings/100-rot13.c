#include "main.h"

/**
 * rot13 - Entry function
 *
 * Description: Function that encodes string into rot13
 *
 * @str: pointer string
 *
 * Return: Always 0.
 */

char *rot13(char *str)
{
	int i, j;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (letters[j] == *(str + i))
			{
				*(str + i) = rot13[j];
				break;
			}
		}
	}
	return (str);
}
