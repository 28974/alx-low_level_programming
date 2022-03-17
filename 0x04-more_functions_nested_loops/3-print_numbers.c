#include "main.h"

/**
 * prints_numbers - functions
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n += 1;
	}
	_putchar('\n');
}
