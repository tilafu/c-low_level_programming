#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: the first number
 * @b: the 2nd number
 * Return: addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subracts two numbers
 * @a: 1st num
 * @b: 2nd num
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies the two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - calculates the modulo of two numbers
 * @a: the 1st number
 * @b: the 2nd number
 * Return: remainder
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
