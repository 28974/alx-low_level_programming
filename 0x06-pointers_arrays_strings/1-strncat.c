#include "main.h"

 /**
  * _strncat - concatenates two strings using at most
  *
  * @dest: The string to be appended upon
  * @src: The print to be appended to dest.
  * @n: the number of bytes
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0; j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}


