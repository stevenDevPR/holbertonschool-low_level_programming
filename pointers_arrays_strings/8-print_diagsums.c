#include <stdio.h>
/**
 * print_diagsums - main function
 *
 * @a: pointer
 *
 * @size: size of arrays
 */

void print_diagsums(int *a, int size)
{
	int i, diag1_sum = 0, diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i];
		diag2_sum += a[(size - 1 - i) * size + i];
	}
	printf("%d, ", diag1_sum);
	printf("%d", diag2_sum);
	printf("\n");
}
