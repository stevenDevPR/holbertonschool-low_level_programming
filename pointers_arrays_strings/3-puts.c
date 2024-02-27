#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _puts - main function to print the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	_putchar('\n');
}
