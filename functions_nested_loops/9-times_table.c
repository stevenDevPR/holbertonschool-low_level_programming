#include "main.h"

int table(void)
{
	times_table();

	return (0);

}

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;
			_putchar(result + '0');
		}

		if (j < 9)
		{
			_putchar(44);
			_putchar(32);
		}
	
	}
	_putchar('\n');

}
