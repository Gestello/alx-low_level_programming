#include "main.h"

/**
 * print_diagonal - prints diagonal line n times
 * @n: parameter
 * Return: no return
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				putchar('');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
