#include "main.h"
#include <stdio.h>

int integer()
{
	add(5, 6);

	return (0);

}

int add(int num1, int num2)
{
	int sum;

	sum = num1 + num2;

	printf("%d", sum);
}
