#include "main.h"
/**
 * print_numbers - function to print numbers from 0 to 9
 */

void print_numbers(void)
{
	char num = '0';

	do {
		_putchar(num);
		num++;
	} while (num <= 9);
	_putchar('\n');
}
