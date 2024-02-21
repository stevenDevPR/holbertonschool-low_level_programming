#include "main.h"
/**
 * minutes - function :x
 *
 * Return: 0
 */

int minutes(void)
{
	jack_bauer();

	return (0);

}
/**
 * jack_bauer -function to make all hours and minutes
 */

void jack_bauer(void)
{
	int i;
	int j;

		for (i = 0; i <= 23; i++)
		{
			for (j = 0; j <= 59; j++)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
				_putchar(':');
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
				_putchar('\n');
			}
		}
}
