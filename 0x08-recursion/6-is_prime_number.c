#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - tells if an int is a prime num or not
 * @n: num to valuate
 *
 * Return: one if n is a prime num, zero if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - it calculates if a num is prime recursively
 * @n: num to valuate
 * @i: the iterator
 *
 * Return: one if n is prime, zero if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
	return (0);
	return (actual_prime(n, i - 1));
}
