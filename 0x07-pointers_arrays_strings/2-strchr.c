#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: charater to find
 *
 * Return: the string to character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
