#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_rev - function that return the length of a string
 *
 * @s: pointer
 *
 * Return: will return the value of i
 */

void  print_rev(char *s)
{

		int len, reverse, i = 0;

		while (s[i] != '\0')
		{
			i++;
		}

		len = i;

		for (reverse = len -1; reverse >= 0; reverse--)
		{
			_putchar(s[reverse]);
		}
		_putchar('\n');
}
