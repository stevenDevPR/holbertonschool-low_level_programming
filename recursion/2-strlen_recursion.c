#include "main.h"
/**
 * _strlen_recursion - main function
 *
 * @s: pointer
 *
 * Return: 0 if Null
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
