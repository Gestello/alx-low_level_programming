#include "main.h"

/**
 * prime_check - check recursively the input from is_prime_number
 * @s: value check
 * @r: number to check
 * Return: 1 if prime, otherwise 0
 */

int prime_check(int s, int r)
{
	if (r < 2 || r % s == 0)
		return (0);
	else if (s > r / 2)
		return (1);
	else
		return (prime_check(s + 1, r));
}

/**
 * is_prime_number - check if number is prime
 * @n: number to check
 * Return 1 if prime, otherwie 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
