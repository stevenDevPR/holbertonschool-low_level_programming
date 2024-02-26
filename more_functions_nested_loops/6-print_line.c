#include "main.h"
/**
 * print_line - function to draw in termial
 *
 * @n: value to use
 */

void print_line(int n)
{
	char under = '_';
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(under);
	}
}

