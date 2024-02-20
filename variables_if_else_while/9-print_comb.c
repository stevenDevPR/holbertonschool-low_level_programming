#include <stdio.h>

/**
 * main - start program
 *
 * Return: 0
 */

int main(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
	{
		putchar(digits + '0');

		if (digits <= 8)
			putchar(',');
			putchar(' ');

	}
	putchar('\n');

	return (0);
}
