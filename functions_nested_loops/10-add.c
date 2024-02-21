#include "main.h"
#include <stdio.h>
/**
 * integer - main function
 *
 * Return: Always 0;
 */

int integer(void)
{
	add(5, 6);

	return (0);

}

/**
 * add - function to add two integers
 *
 * @num1: value to sum
 *
 * @num2: value to sum
 *
 * Return: will return the sum
 */

int add(int num1, int num2)
{
	int sum;

	sum = num1 + num2;

	return (sum);
}
