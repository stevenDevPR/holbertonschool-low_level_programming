#include "main.h"
/**
 * tables - main function
 *
 * Return: Always 0
 */

int tables(void)
{
	times_table();

	return (0);

}
/**
 * times_table - prints the  times table
 */
void times_table(void)
{
	int i, j;

	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
			}

			if (result >= 10)
			{
				_putchar(result / 10 + '0');
			}
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
