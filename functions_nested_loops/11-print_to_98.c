#include <stdio.h>
#include "main.h"
/**
 * natural - main function to program
 *
 * Return: Always 0
 */

int natural(void)
{
	print_to_98(6);

	return (0);

}
/**
 * print_to_98 - main function to print until 98
 *
 * @n: value to be checked
 *
 *Return: Always 0
 */

void print_to_98(int n)
{
	int i;

	i = n;

	if (i < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	if (i > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}


