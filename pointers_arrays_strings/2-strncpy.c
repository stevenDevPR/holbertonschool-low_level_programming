#include "main.h"
#include <stddef.h>

/**
 * _strncpy - Copies up to n characters from src to dest.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
    size_t i = 0;
    char *orig_dest = dest;

    while (i < (size_t)n && *src != '\0')
    {
        *dest++ = *src++;
        i++;
    }

    while (i < (size_t)n)
    {
        *dest++ = '\0';
        i++;
    }

    return orig_dest;
}
