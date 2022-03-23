#include "main.h"

 /**
  * _strncat - concatenates two strings using at most
  *            an inputted number of bytes from src
  * @dest: The string to be appended upon
  * @src: The print to be appended to dest.
  * @n: the number of bytes
  *
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
