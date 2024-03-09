#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 *
 * @argc: value
 *
 * @argv: value
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		int currentNum = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}

		sum += currentNum;
	}

	printf("%d\n", sum);

	return (0);
}

