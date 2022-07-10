#include <stdio.h>
#include "main.h"

/**
 * main - contains fizzbizz
 * Return: null
 */

int main(void)
{

	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5))

			printf("Fizz Buzz\n");

		else if (i % 3 == 0)

			printf("Fizz\n");

		else if (i % 5 == 0)

			printf("Buzz\n");

		else

			printf("%d", i);

		return (0);
	}
}

