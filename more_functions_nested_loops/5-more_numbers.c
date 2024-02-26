#include "main.h"
/**
 * more_numbers - function to print 14 times the numbers
 */

void more_numbers(void)
{
	int i = 0;

	char j;

	do{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	} while (i <= 9);
}
