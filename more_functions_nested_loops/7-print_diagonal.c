#include "main.h"
/**
 * print_diagonal - print diagonal design
 *
 * @n: value to use
 */

void print_diagonal(int n)
{
	char slash = 92;

	char less = '\n';

	int i, j;

	for (i = 1; i <= n; i++)
	{
		_putchar(slash);

		if (n <= 0)
		{
			_putchar(less);
		}
		_putchar('\n');
	}
	for (j = 1; j <= n; j++)
	{
		_putchar(' ');
	}
	_putchar('\n');
}
