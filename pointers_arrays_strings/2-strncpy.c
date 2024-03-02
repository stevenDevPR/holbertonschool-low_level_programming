#include "main.h"
#include <stddef.h>
/**
 * _strncat - main function
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
        size_t i = 0;
	char *origi_dest = dest;

        while ((size_t)i < (size_t) n && (char) *src != '\0')
        {
                *dest++ = *src++;
                i++;
	}

	if (*src == '\0')
	{
		*dest = '\0';
	}
        return (origi_dest);
}
