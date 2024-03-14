#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - main function
 *
 * @s1: value
 *
 * @s2: value pointer
 *
 * Return: concatenated
 */

char *str_concat(const char *s1, const char *s2)
{
	char *concatenated;
	int sum = 0;
	int i;
	int lenone = 0;
	int lentwo = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lenone])
	{
		lenone++;
	}
	while (s2[lentwo])
	{
		lentwo++;
	}
	sum = lenone + lentwo + 1;
	concatenated = malloc(sizeof(char) * sum);
	if (concatenated == 0)
	{
		return (NULL);
	}
	for (i = 0; i < lenone; i++)
	{
		concatenated[i] = s1[i];
	}
	for (i = 0; i < lentwo; i++)
	{
		concatenated[lenone + i] = s2[i];
	}
	return (concatenated);
}
