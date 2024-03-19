#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 for wrong number of arguments,
 *         99 for invalid operator, 100 for division/modulo by zero
 */
int main(int argc, char *argv[])
{
    int a, b, result;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
    {
        printf("Error\n");
        return (100);
    }

    operation = get_op_func(argv[2]);
    if (!operation)
        return (99);

    result = operation(a, b);
    printf("%d\n", result);

    return (0);
}
