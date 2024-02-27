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
		int len;

		while (s[i] != '\0')
		{
			i++;
		}
		len = i;

		for (; len >= 0; len--)
		{
			write(1, &s[len], 1);
		}
}
