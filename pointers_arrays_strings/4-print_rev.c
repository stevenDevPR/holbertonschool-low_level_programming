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

		int i = 0;
		int j;

		while (s[i] != '\0')
		{
			i++;
		}

		for (j = i; j >= 0;)
		{
			--j;
			write(1, &s[j], 1);
		}
		_putchar('\n');
}
