#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 * Return:0
 */
int main(void)
{

	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
