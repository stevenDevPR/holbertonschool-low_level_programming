#include "main.h"
/**
 * cap_string - main function
 *
 * @str: pointer
 *
 * Return: str
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalizeNext = 1;

	while (*ptr != '\0')
	{
		if (capitalizeNext && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - 'a' + 'A';
		}

		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ','
				|| *ptr == ';' || *ptr == '.' || *ptr == '!'
				|| *ptr == '?' || *ptr == '"' || *ptr == '('
				|| *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalizeNext = 1;
		}
		else
		{
			capitalizeNext = 0;
		}

		ptr++;
	}

	return (str);
}
