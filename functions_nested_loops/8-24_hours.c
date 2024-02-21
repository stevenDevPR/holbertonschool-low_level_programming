#include "main.h"

int minutes(void)
{
	jack_bauer();

	return (0);

}

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
		{
			for (j = 0; j <= 59; j++)
			{
				_putchar(i + 0);
				_putchar(':');
				_putchar(j + 0);
				_putchar('\n');
			}
		}
}
