#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array followed by a new line
 * @n: number of element of the array
 * @a: pointer to the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(",%d", a[i]);
	}
	printf("\n");
}
