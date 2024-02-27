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


		for (reverse = 0; reverse < i / 2; reverse++)
		{
			char temp = s[reverse];

			s[reverse] = s[i - reverse - 1];

			s[i - reverse - 1] = temp;

		}
		printf("\n");
}
