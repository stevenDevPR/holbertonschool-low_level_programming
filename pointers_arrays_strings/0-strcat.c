#include "main.h"
/**
 * _strcat - main function
 *
 * @dest: pointer to destination
 *
 * @src: pointer of the source
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *origi_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (origi_dest);
}
