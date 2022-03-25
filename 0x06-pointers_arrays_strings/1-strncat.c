#include "main.h"

/**
 * _strncat - concatenation of two strings
 * @dest: pointing to the dest string
 * @src: pointing to src string
 * @n: the bytes to be printed
 * Return: pointing to final string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

