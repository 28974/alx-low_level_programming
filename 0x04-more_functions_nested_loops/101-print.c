#include "main"

/**
 * print_number - function that print
 * @n: input value
 */

void print_number(int n)
{
	int len, papi, i, tamporizer, exposant;

	papi = n;
	exposant = len = 1;
	/*see if the number is negative*/
	if (papi < 0)
	{
		papi *= -1;
		_putchar('-');
	}

	/* yes here we are*/
	tamporizer = papi;
	while (tamporizer >= 10)
	{
		len++;
		tamporizer /= 10;
	}

	/*exposant*/
	for (i = 1; i < len; i++)
		exposant *= 10;
	/*main */
	while (exposant > 1)
	{
		_putchar((papi / exposant) % 10 + '0');
		exposant /= 10;
	}
	_putchar(papi % 10 + '0');
}
