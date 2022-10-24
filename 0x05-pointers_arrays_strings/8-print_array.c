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
	int p = 0;

	for (; p < n; p++)
	{
		printf(" %d ", *(a + p));
		if (p != (n - 1))
			printf(" , ");
	}

	printf("\n");
}
