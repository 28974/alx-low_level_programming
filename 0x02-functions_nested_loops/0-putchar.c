#include <main.h>

/**
 * main - program that prints _putchar
 *
 * _putchar print the character given
 * Return: Always 0.
 */

int main(void)
{
	int n = 0;
	char str_ptc[8] = "_putchar";

	while (n < 8)
	{

		_putchar(str_ptc[n]);
		n += 1;
	}
	_putchar('\n');
		return (0);
}
