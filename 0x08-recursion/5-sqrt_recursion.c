#include "main.h"
/**
 * _sqrt_recursion - return the root of n
 * @n: number whose root we want
 * Return: if no natural root, return -1, otherwise return root
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}

/**
 * root - function to find _sqrt_recursion
 * @c: number to find root
 * @i: increment number
 * Return: square root of -1 if none is found
 */
int root(int c, int i)
{
	int square = i * i;

	if (square == c)
		return (i);

	else if (square < c)
		return (root(c, i + 1));
	else
		return (-1);
}
