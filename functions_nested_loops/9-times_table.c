#include "main.h"

int table(void)
{
	times_table();

	return (0);

}

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar((i * i) + 0);
		_putchar(44);
	}

}
