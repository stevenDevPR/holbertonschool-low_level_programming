#include "main.h"

/**
 * abc10 - main function
 *
 * Return: 0
 */

void print_alphabet_x10(void);

int abc10(void)
{
	print_alphabet_x10();

	return (0);

}

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	do {
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
	} while (i <= 9);

}
