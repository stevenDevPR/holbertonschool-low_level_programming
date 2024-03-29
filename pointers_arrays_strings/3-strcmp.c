#include "main.h"
/**
 * _strcmp - main function
 *
 * @s1: pointer
 *
 * @s2: pointer
 *
 * Return: *s1 - *s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
