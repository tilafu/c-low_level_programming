#include <stdio.h>
#include "main.h"

/**
 * main - starts the Fizz Buzz function
 * Return: Always 0
 */

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3) && (i % 5))
			printf("FizzBuzz");
		else if (i % 5)
			printf("Buzz");
		else if (i % 3)
			printf("Fizz");
		else
			printf("%i\n", i);
	}
	return (0);
}


