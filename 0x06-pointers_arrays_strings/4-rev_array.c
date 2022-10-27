#include "main.h"

/**
 * reverse_array - reverse thecontent of an array of of integers
 * @a: the array of integers to be reversed
 * @n: the number of element in the array
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	temp = 0;
	n = n - 1;

	for (i = 0; i <= n; n--, i++)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
	}
}
