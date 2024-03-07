#include "main.h"
#include <stddef.h>
/**
 * _strstr - main funciton
 *
 * @haystack: pointer
 *
 * @needle: pointer
 *
 * Return: haystack and NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		int i = 0;

		while (needle[i] != '\0' && haystack[i] == needle[i])
		{
			i++;
		}

		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
