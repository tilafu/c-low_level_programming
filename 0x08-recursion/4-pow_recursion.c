#include "main.h"

/**
 * _pow_recursion - return x raised to y
 * @x: number's value
 * @y: numbers power
 * Return: x to pow y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
