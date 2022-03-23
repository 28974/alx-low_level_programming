#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenated two strings
 * @dest: destination strng
 * @src: source string
 *
 * Return: A pointer to the resulting dest
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while  (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	dest[dlen] = '\0';
	return (dest);
}

