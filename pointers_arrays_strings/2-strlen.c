#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that return the length of a string
 *
 * @s: pointer
 *
 * Return: will return the value of i
 */

int _strlen(char *s)
{
		int count = 0;

		int i = 0;

		while (s[i] != '\0')
		{
			count++;
			i++;
		}
		return (i);
}
