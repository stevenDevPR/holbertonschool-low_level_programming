#include "main.h"
#include <stddef.h>
/**
 * _strncat - main function
 *
 * @dest: pointer to destination
 *
 * @src: pointer of the source
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *origi_dest = dest;
	size_t i = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i < n && (char)*src != '\0')
	{
		*dest++ = *src++;
		i++;
	}

	*dest = '\0';

	return (origi_dest);
}
