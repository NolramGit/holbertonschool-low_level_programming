#include "main.h"

int _putchar(char c)
{
	return (c);
}
int _islower(int c)
{	
	return (c);
}
int _isalpha(int c)
{
	return (c);
}
int _abs(int n)
{
	return (n);
}
int _isupper(int c)
{
	return (c);
}
int _isdigit(int c)
{
	return (c);
}
int _strlen(char *s)
{
	return (*s);
}
void _puts(char *s)
{
	_putchar(*s);
}
char *_strcpy(char *dest, char *src)
{
	_putchar(*dest);
	_putchar(*src);
	return (dest);
}
int _atoi(char *s)
{
	_putchar(*s);
	return (0);
}
char *_strcat(char *dest, char *src)
{
	_putchar(*dest);
	_putchar(*src);
	return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
	_putchar(*dest);
	_putchar(*src);
	_putchar(n);
	return (dest);
}
char *_strncpy(char *dest, char *src, int n)
{
	_putchar(*src);
	_putchar(*dest);
	_putchar(n);
	return (dest);
}
int _strcmp(char *s1, char *s2)
{
	_putchar(*s1);
	_putchar(*s2);
	return (0);
}
char *_memset(char *s, char b, unsigned int n)
{
	_putchar(*s);
	_putchar(b);
	_putchar(n);
	return (s);
}
char *_memcpy(char *dest, char *src, unsigned int n)
{
	_putchar(*dest);
	_putchar(*src);
	_putchar(n);
	return (dest);
}
char *_strchr(char *s, char c)
{
	_putchar(*s);
	_putchar(c);
	return (s);
}
unsigned int _strspn(char *s, char *accept)
{
	_putchar(*s);
	_putchar(*accept);
	return (1);
}

char *_strpbrk(char *s, char *accept)
{
	_putchar(*s);
	_putchar(*accept);
	return (s);
}
char *_strstr(char *haystack, char *needle)
{
	_putchar(*haystack);
	_putchar(*needle);
	return (haystack);
}
