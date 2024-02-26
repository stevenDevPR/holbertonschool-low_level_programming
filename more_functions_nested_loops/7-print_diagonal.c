#include "main.h"
/**
 * print_diagonal - print diagonal design
 *
 * @n: value to use
 */

void print_diagonal(int n)
{
	char slash = 92;

	char space = 32;

	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j != 0)
				{
					_putchar(space);
				}
			}
			_putchar(slash);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
