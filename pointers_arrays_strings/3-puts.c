#include "main.h"
#include <stdio.h>
/**
 * _puts - main function to print the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
