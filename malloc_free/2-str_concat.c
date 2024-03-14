#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - main function
 *
 * @s1: value
 *
 * @s2: value pointer
 *
 * Return: result
 */

char *str_concat(const char *s1, const char *s2)
{
	size_t len_s1 = 0, len_s2 = 0;
	const char *ptr_s1 = s1, *ptr_s2 = s2;
	char *ptr_result;
	char *result;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (*(ptr_s1++))
		len_s1++;
	while (*(ptr_s2++))
		len_s2++;

	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (!result)
		return (NULL);

	ptr_result = result;

	while (*s1)
		*(ptr_result++) = *(s1++);
	ptr_result = result +len_s1;

	while (*s2)
		*(ptr_result++) = *(s2++);

	*ptr_result = '\0';

	return (result);
}

