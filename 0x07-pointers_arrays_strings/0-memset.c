#include "main.h"

/**
 * _memset - function that fills memory
 *
 * @s: memory area to return
 * @b: constant style
 * @n: size of bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
