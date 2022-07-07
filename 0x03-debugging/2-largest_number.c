#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: first no
 * @b: second number
 * @c: third number
 * Return: largest value
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)

	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

