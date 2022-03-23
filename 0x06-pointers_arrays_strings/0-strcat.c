#include <stdio.h>
#include "main.h"

/**
 * *_strcat - function that concatenated two strings
 * @dest: destination strng
 * @src: source string
 *
 * Return: A pointer to the resulting dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;

	}

	for (i = 0; s[i] != 0; i++)
	{
		dest[dlen] = s[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

