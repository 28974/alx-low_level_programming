#include <stdio.h>
/**
 * main - Printing its own name.
 * @argc: count's  arguments
 * @argv: vectors arguments
 * Return: 0 when we have success
 */
int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}
