#include "main.h"

 /**
  * _strncat - function that concatenates two strings
  *
  * @dest: pointer to destination char
  * @src: pointer to source char
  * @n: number of bytes to receive
  * Return: char.
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	for (k= 0; dest[k] != '\0'; k++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[k + i] = src[i];
		i++;
	}
	return (dest);
}
