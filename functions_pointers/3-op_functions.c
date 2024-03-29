#include "3-op_functions.h"
#include <stdio.h>
/**
 * op_sum - function that add integers
 * @a: integer
 * @b: integer
 * Return: return the result
 */
int op_sum(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  function that substract
 * @a: integer
 * @b: integer
 * Result: return the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_divide - function that divide
 * @a: integer
 * @b: integer
 * Return: return the result
 */
int op_divide(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ( a / b)
}

/**
 * op_mult - function to multiply
 * @a: integer
 * @b: integer
 * @Return: return the result
 */
int op_mult(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - function to modulo
 * @a: integer
 * @b: integer
 * Return: return the result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
