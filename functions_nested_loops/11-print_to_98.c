#include <stdio.h>
#include "main.h"

int natural(void)
{
	print_to_98(6);

	return (0);

}

void print_to_98(int n)
{
	int i;

	for (i = n ; i <= 98; i++)
	{
		if (i < 98)
		{
			printf("%d,", i);
		}
		else
		{
			printf("%d", i);
		}
		if ( i > 98)
		{
			for (i = n; i >= 98; i--)
			{
				printf("%d, ", i);
			}
		}
	}

	printf("\n");
}


