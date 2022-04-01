#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments
 * @argv: array pointer to argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
