#include "main.h"
/**
 * print_square - function to print the square
 *
 * @size: value to check
 */

void print_square(int size)
{

	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
