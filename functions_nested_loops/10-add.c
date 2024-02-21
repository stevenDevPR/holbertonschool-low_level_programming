#include "main.h"
#include <stdio.h>

int integer(void)
{
	add(5, 6);

	return (0);

}

int add(int num1, int num2)
{
	int num1, num2, sum;

	sum = num1 + num2;

	printf("%d", sum);
}
