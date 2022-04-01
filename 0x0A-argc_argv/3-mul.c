#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * main - Entry point
 * @argc: arguments
 * @argv: array pointer to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

