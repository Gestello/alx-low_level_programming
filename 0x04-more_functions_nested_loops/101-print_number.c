#include "main.h"

/**
 * print_number - function print integer
 * @n: the integer to be printed
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = n * -1;
		putchar('-');
	}
	else
	{
		n1 = n;
	}
}
