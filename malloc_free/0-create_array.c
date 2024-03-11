#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - main function
*
*@size: size of arrray
*
*@c: value of array
*
*Return: NULL
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);

}

