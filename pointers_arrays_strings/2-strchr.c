#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or "nil" if c is not found.
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0' && *s != c)
        s++;

    return (*s == c) ? s : "nil";
}
