#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	argc--;/*added to pass checks*/
	printf("%s\n", argv[0]);
	return (0);
}
