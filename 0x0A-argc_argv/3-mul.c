#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * main - Entry point
 * atoi is function to convert a string
 * @argc: arguments
 * @argv: array pointer to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 0; i < argc, i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
