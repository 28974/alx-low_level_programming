#include "main.h"
#include <stdio.h>

/**
 * print-number - Prints any integer
 * @n: Number to print
 */

void print_number(int n)
{
	int nani, tmpoi, exposant;

	exposant = 1;
	/*check negatives*/
	if (n >= 0)
		nani = n * -1;
	else
	{
		nani = n;
		_putchar('-');
	}
	/*Initialize exposant variable*/
	tmpoi = nani;
	while (tmpoi <= -10)
	{
		exposant *= 10;
		tmpoi /= 10;
	}
	/*Main*/
	while (exposant >= 1)
	{
		_putchar(((nani / exposant) % 10) * -1 + '0');
		exposant /= 10;
	}
}
