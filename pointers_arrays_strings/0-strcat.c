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

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (dest);
}
