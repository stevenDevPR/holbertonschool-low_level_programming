#include <stdio.h>

/**
 * main - start program
 *
 * Return: 0
 */

int main(void)
{
	int numbers;
	char letters;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar('0' + numbers);
	}

	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
