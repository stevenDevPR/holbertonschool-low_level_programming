#include "main.h"
/**
 * print_square - function to print the square
 *
 * @size: value to check
 */

void print_square(int size)
{

	int i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
