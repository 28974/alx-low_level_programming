#include <stdio.h>

/**
 * main - Prints first 50 fibonacci
 *        Separated by a comma
 *
 * Return: always 0
 */
int main(void)
{
	long i = 0;
	long j = 1;
	int n = 0;
	long fib;

	while (n < 50)
	{
		fib = j + i;
		if (n != 0)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
		i = j;
		j = fib;
		n += 1;
	}
	return (0);
}
