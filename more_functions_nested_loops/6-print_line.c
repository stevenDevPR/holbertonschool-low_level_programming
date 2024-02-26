#include "main.h"
/**
 * print_line - function to draw in termial
 *
 * @n: value to use
 */

void print_line(int n)
{
	char under = '_';
	char only = '\n';
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(under);

		if (n <= 0)
		{
			_putchar(only);
		}
	}
	_putchar('\n');
}

