#include "main.h"

/**
 * digit - function of program
 *
 * Return: 0
 */

int digit(void)
{
	print_last_digit(546);

	return (0);

}

/**
 * print_last_digit - function to print las digit
 *
 * @digit: value to be checked
 *
 * Return: return lastDigit
 */

int print_last_digit(int digit)
{
	int lastDigit;

	lastDigit = digit % 10;

	_putchar('0' + lastDigit);

	return (lastDigit);

}

