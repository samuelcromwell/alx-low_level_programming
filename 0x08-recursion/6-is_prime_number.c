#include "main.h"
int prime(int n, int d);

/**
 * is_prime_number - checks if n is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - check if n is prime
 * @n: number to check
 * @d: divider
 * Return: 1 if n is prime, 0 otherwise
 */
int prime(int n, int d)
{
	if (d == 1)
		{
		return (1);
		}
	if (n % d == 0 && d > 0)
		{
		return (0);
		}
	return (prime(n, d - 1));
}
