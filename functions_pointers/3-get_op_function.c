#include "3-op_functions.h"
#include <stddef.h>
/**
 * get_op_function - function to get operator
 * @s: pointer to a string
 * @int: integer
 * @int: integer
 * Return: return that function based on operator
 */

int(*get_op_func(char *s))(int, int)
{
	if (!s || s[1] != '\0')
		return (NULL);

	switch (*s)
	{
		case '+':
			return (&op_sum);
		case '-':
			return (&op_sub);
		case '*':
			return (&op_mult);
		case '/':
			return (&op_divide);
		case '%':
			return (&op_mod);
		default:
			return (NULL);
	}
}
