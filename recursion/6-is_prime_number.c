#include "main.h"
int(_is_prime_helper(int n, int divisor));
/**
 * is_prime_number - main funtion
 *
 * @n: value to check
 *
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (_is_prime_helper(n, 2));
}
/**
 * _is_prime_helper - helper funciton
 *
 * @n: value
 *
 * @divisor: divisor
 *
 * Return: 1 if prime 0 if not
 */

int _is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (_is_prime_helper(n, divisor + 1));
}
