#include <stdio.h>

/**
 * main - prints the number of arguements passed into it
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
