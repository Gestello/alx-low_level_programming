#include <stdio.h>
#include "main.h"

/**
 * print_array - printn element of array
 * @a: array name
 * @n: the number of element ofthe array
 * Return a and n inputs
 */

void print_array(int *a, int n)
{
	int p;

	p = 0;
	while (p < n)
	{
		if (p != n - 1)
			printf(" %d, ", a[p]);
		else
			printf(" %d ", a[p]);
		p++;
	}
	putchar('\n');
}
