#include "main.h"
/**
 * reverse_array -main function
 *
 * @a: pointer
 *
 * @n: value
 */

void reverse_array(int *a, int n)
{
	int *first = a;
	int *end = a + n - 1;

	while (first < end)
	{
		int temp = *first;
		*first = *end;
		*end = temp;

		first++;
		end--;
	}
}

