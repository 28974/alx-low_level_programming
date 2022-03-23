#include "main.h"

/**
 * reverse_array - function that reverse the content
 *
 * @a: pointer of array string
 * @n: the number of element to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *init, *final;
	int aux = 0;

	init = a;
	final = a;
	n -= 1;
	while (i < n)
		i += 1;
	while (j <= i)
	{
		aux = *(init + j);
		*(init + j) = *(final + i);
		*(final + i) = aux;
		j++;
		i--;
	}
}
