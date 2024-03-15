#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concatenate
 * Return: A pointer to the newly allocated memory
 * containing the concatenated string
 * NULL if memory allocation fails or if s1 and s2 are NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;

	char *concatenated;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concatenated = malloc((len1 + (n >= len2 ? len2 : n) + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n && s2[j]; i++, j++)
		concatenated[i] = s2[j];
	concatenated[i] = '\0';

	return (concatenated);
}
