#include "main.h"
/**
 * abc - intitial main function
 *
 * Return: 0
 */

void print_alphabet(void);

int abc(void)
{

	print_alphabet();


	return (0);

}

/**
 * print_alphabet - print the alphabet
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
