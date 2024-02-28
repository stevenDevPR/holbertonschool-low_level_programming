#include "main.h"
#include <stdio.h>
/**
 * _atoi - main function
 *
 * @s: pointer
 */

int _atoi(char *s)
{
    int sign = 1;
    int result = 0;

    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;

    while (*s == '-' || *s == '+') {
        sign *= (*s++ == '-') ? -1 : 1;
    }

    while (*s >= '0' && *s <= '9') 
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}

