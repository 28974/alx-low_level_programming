#include "main.h"

/**
 * _memste - function that fills memory
 *
 * @s: memory area to return
 * @b: constant style
 * @n: size of bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

		*(s + i) = b;
		i += 1;
	}
	return (s);
}

