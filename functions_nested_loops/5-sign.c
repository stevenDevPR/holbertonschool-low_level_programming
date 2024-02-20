#include "main.h"
/**
 * number - this is the main function
 *
 * Return: 0
 */


int number(void)
{
	print_sign('1');

	return (0);

}

/**
 * print_sign - function to print sign and returns
 *
 * @n: character to be checked
 *
 * Return:  1 if character is positive, 0 if is zero and -1 if is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar("0");
		return (0);
}
