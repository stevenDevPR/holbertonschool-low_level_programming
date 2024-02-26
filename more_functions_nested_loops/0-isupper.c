#include "main.h"
/**
 * _isupper - function to see if is uppercase
 *
 * @c: value to be checked
 *
 * Return: 1 if c is uppercase or 0 if is otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
