#include <stdio.h>
#include "main.h"

int natural(void)
{
	print_to_98(6);

	return (0);

}

void print_to_98(int n)
{


	for (n = n; n <= 98; n++)
	{
		if (n < 98)
		{
			printf("%d ,", n);
		}
		else
	
		printf("%d", n);
	}
	
	printf("\n");
}


