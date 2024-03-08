#include "main.h"
/**
 * factorial - main function
 *
 * @n: value to check
 *
 * Return: -1 or 1 or facorial n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
