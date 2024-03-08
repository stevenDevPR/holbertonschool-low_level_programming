#include "main.h"
/**
 * _sqrt_recursion - function
 *
 * @n: value
 *
 * @guess: value
 *
 * Return: 0 or -1 or recursion
 */

int _sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}
/**
 * _sqrt_helper - helper
 *
 * @n: value
 *
 * @guess: value
 *
 * Return: guess or recursion
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n || guess > n / guess)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, guess + 1));
	}
}
