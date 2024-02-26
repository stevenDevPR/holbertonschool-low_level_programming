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

	char space = 32;

	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(space);
		}
		_putchar(slash);

		if (n <= 0)
		{
			_putchar(less);
		}
	}
	_putchar('\n');
}
