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

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
