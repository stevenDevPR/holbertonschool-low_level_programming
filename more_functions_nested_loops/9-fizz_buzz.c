#include "main.h"
#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	multiples();

	return (0);

}
/**
 * multiples - main function
 */

void multiples(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i == 100)
		{
			printf("Buzz");
		}
		else if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if	(i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
