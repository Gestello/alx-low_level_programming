#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to input
 * Return: 1 if > 0, 0 if = 0 and -1 if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('_');
		return ('-1');
	}
}

