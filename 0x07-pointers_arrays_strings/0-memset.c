#include "main.h"

/**
 * _memste - function that fills memory
 *
 * @s: memory area to return
 * @b: constant style
 * @n: size of bytes
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; n++)
	{
		s[a] = b;
	}

	return (s);
}
