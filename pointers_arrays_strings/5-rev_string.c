#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * rev_string - function that return the length of a string
 *
 * @s: pointer
 */

void rev_string(char *s)
{

		int reverse, i = 0;

		while (s[i] != '\0')
		{
			i++;
		}


		for (reverse = i - 1; reverse >= 0; reverse--)
		{
			printf("%c", s[reverse]);
		}
		printf("\n");
}
