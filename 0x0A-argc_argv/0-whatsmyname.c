#include <stdio.h>

/**
 * main - program print its own name
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argc--; /* added to pass checks */
	printf("%s\n", argv[0]);
	return (0);
}
