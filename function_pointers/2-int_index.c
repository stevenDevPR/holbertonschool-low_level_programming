#include "function_pointers.h"
/**
 * int_index - function to check
 * @array: array
 * @size: size of array
 * @cmp: pointer to a function
 * Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

