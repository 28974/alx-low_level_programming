#include "main.h"

/**
 * print-number - prints any integer with putchar
 * @n: number to print
 *
 * Return : nothing
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	x = n;
	 if (x / 10)
		 printf_number(x / 10);

	 _putchar(x % 10 + '0');
}
