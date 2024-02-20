#include "main.h"
/**
 * character - function to start program
 *
 * Return: 0
 */

int _isalpha(int c);

int character(void)
{
	_isalpha('a');

	return (0);

}

/**
 * _isalpha - function to check if is a letter
 *
 * @c: value to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);

}
