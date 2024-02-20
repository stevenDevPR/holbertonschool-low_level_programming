#include "main.h"
/**
 * clower - function main
 *
 * Return: 0
 */


int clower(void)
{

	_islower('c');

	return (0);

}

/**
 * _islower - finding if c is lower
 *
 * @c: character to be checked
 *
 * Return: 0 if is uppercase and 1 if lowercase
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
