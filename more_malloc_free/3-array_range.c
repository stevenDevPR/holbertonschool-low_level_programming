#include <stdlib.h>
/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value of the array (inclusive)
 * @max: The maximum value of the array (inclusive)
 *
 * Return: Pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr, i;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
