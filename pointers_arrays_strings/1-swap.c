#include "main.h"
#include <stddef.h>
/**
 * swap_int - main function
 *
 * @a: value of pointer
 *
 * @b: value of pointer
 */

void swap_int(int *a, int *b)
{
	if ((a != NULL) && (b != NULL))
	{
		*a = *b;
		*b = *a;
	}
}
