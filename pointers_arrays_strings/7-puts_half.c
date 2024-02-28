#include "main.h"
/**
 * puts_half - main function
 *
 * @str: pointer
 */

void puts_half(char *str)
{
	int i = 0, len, index, half;

	while (str[i] != '\0')
	{
		i++;

	}

	len = i;

	half = (len - 1) / 2;


	for (index = half + 1; index <= len - 1; index++)
	{
		_putchar(str[index]);

	}
	_putchar('\n');
}

