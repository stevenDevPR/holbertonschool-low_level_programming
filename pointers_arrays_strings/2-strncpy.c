#include "main.h"
#include <stddef.h>
/**
 * _strncpy - main function
 *
 * @dest: pointer to destination
 *
 * @src: pointer of the source
 *
 * @n: number of bytes to print
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *origi_dest = dest;

	while ((size_t)i < (size_t)n && *src != '\0')
	{
		*dest++ = *src++;
		i++;
	}
	
	while (i < n)
	{
		*dest = '\0';
		i++;
	}

	return (origi_dest);
}
