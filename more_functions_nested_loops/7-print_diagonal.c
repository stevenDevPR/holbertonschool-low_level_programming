#include "main.h"
/**
 * print_diagonal - print diagonal design
 *
 * @n: value to use
 */

void print_diagonal(int n)
{

	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
