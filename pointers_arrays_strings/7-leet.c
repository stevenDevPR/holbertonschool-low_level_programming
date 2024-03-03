#include "main.h"
/**
 * leet - main function
 *
 * @str: pointer
 *
 * Return: str
 */

char *leet(char *str)
{
	char *ptr = str;
	char *leetCharacters = "aeotlAEOTL";
	char *leet_Replace = "4307143071";

	while (*ptr != '\0')
	{
		int i = 0;

		while (leetCharacters[i] != '\0')
		{
			if (*ptr == leetCharacters[i])
			{
				*ptr = leet_Replace[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}
