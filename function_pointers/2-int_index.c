#include "function_pointers.h"
/**
 * int_index - function to check
 * @array: array
 * @size: size of array
 * @cmp: pointer to a function
 * @int: integer that return
 * Return: i or -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	/**
	 * checking that array, cmp and size are
	 * not null
	 */
	if (array && cmp && size)
		while (i < size)
		{
			if (cmp(array[i])
					return (i);
					i++;
					}
					return (-1);
					}

