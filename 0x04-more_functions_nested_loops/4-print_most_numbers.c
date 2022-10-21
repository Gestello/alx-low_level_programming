#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9 excluding 2 and 4
 */
void print_most_numbers(void)
{
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		if (s != '2' && s != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
