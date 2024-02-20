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
