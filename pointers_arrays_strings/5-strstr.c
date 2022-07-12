#include "main.h"

/**
 * _strstr - Entry function.
 * Description: Funtion that locates a substring
 *
 * @haystack: char pointer
 * @needle: char pointer
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *strt, *srh;

	while (*haystack != '\0')
	{
		strt = haystack;
		srh = needle;
		while (*srh == *haystack && *haystack != 0
		       && *srh != 0)
		{
			haystack++;
			srh++;
		}
		if (*srh == 0)
			return (strt);
		haystack = strt + 1;
	}
	return (0);
}
