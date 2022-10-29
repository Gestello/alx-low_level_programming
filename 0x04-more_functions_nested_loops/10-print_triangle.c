#include "main.h"

/**
 * print_triangle - create triangle
 * @size: size of traingle
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
		for (j = 1; j < size; j++)
		{
			putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
		}
	}
}

