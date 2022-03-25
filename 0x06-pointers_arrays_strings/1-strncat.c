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
	int i, j;

	i = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
