#include "main.h"
/**
 * root  - helper function to return the root of n
 * @m: number whose root we want
 * @min: set to one to provide lower limit
 * @max: set to m to provide upper limit
 * Return: if no natural root, return -1, otherwise return root
 */


int root(int min, int max, int m)
{
	int guess;

	if (max >= min)
	{
		guess = min + (max + min) / 2;
		if (guess * guess == m)
			return (guess);

		if (guess * guess > m)
			return (root(min, guess - 1, m));
		if (guess * guess < m)
			return (root(guess + 1, m, m));
	}
	return (-1);
}

/**
 * _sqrt_recursion  - fxn to find the squareroot
 * @n: number to find the root
 * Return: square root, or -1  if no root is found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (root(1, n, n));
}
