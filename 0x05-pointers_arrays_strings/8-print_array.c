#include "main.h"
#include <stdio.h>

/**
 * print_array - printn element of array
 * @a: array name
 * @n: the number of element ofthe array
 * Return a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf(" %d ", a[i]);
		else
			printf(", %d", a[i]);
		i++;
	}
	putchar('\n');
}
