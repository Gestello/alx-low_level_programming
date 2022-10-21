#include "main.h"

/**
 * print_numbers - print the number from 0 to 9
 * Return: The numbers from 0 up to 9
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		_putchar(d + '0');
	}

	_putchar('\n');
}
