#include <stdio.h>
#include "main.h"

int natural(void)
{
	print_to_98(6);

	return (0);

}

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
	
		printf("%d ,", n);
		}
		 if (n == 98)
		{
			printf("%d", n);
		}
	}
	printf("\n");
}


