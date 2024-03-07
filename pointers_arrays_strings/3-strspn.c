#include "main.h"
/**
 * _strspn - main function
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		int flag = 0;
		int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			break;
		}
		i++;
	}
	return (i);
}
