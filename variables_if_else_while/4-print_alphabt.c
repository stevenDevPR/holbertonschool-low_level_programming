#include <stdio.h>

/**
 * main - start program
 *
 * Return: 0
 */



int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{

		if (letters != 'q' && letters != 'e')
		{
			putchar(letters);
		}
	}
	putchar('\n');

	return (0);

}
