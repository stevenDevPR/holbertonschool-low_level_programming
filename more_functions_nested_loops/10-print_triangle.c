#include "main.h"
/**
 * print_triangle - function to print triangle
 *
 * @size: value of triangle size
 */

void print_triangle(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		_putchar(' ');

		for (j = i; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
