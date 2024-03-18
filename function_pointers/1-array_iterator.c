#include "function_pointers.h"
/**
 * array_iterator - execute a functions given a parameter
 *
 * @array: the array
 *
 * @size: the size of the array
 *
 * @action: a ppointer to the funciton to be executed
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
