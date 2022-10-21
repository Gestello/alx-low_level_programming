#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9 excluding 2 and 4
 * Return: no return
 */
void print_most_numbers(void)
{
	int s;

	for (s = 48; s < 58; s++)
	{
		if (s != 50 && s != 52)
		{
			putchar(s);
		}
	}
	putchar('\n');
}
