#include "main.h"
/**
 * _strcpy -main
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: start
 */


char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (start);
}

