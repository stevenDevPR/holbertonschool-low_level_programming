#include "main.h"
/**
 * absolute - main function
 *
 * Return: 0
 */

int absolute(void)
{
	_abs(5);

	return (0);
}

/**
 * _abs - function to calculate absolute value
 *
 * @num: value to check
 *
 * Return: -num if negative, num if is positive
 */


int _abs(int num)
{

	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
