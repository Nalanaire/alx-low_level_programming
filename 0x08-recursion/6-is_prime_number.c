#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number - prime identifier
 * @n: number to evaluate
 * Return: 1 if n is a prime number, or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - it check prime numbers
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime or 0 if not
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	return (check_prime(n, i - 1));
}
