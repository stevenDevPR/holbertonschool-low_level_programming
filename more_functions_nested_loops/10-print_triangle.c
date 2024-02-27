#include "main.h"
/**
 * print_triangle - function to print triangle
 *
 * @size: value of triangle size
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(35);
			}
			if (size == 0)
			{
				_putchar('\n');
			}
		}
	}

}
