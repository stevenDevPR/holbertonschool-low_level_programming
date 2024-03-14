#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - main function
 *
 * @str: value pointer
 *
 * Return: Null or duplicate
 */

char *_strdup(const char *str)
{
	size_t len = 0;
	const char *ptr = str;
	size_t i = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[len] = '\0';
	return (duplicate);
}

