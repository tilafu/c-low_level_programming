#include "main.h"

/**
 * is_prime - Checks if a no. is prime
 * @n: The number
 * @y: Buffer number
 * Return: 1 for prime and 0 if not
 */

int is_prime(int n, int y)
{
	if (n == 1)
		return (0);

	else if (n % y == 0 && y != n && y != 1)
		return (0);
	else if (n % y == 0 && y == n)
		return (0);
	else if (n % y == 0 && y == n)
		return (1);
	else
		return (is_prime(n, y + 1));
}

/**
 * is_prime_number - Returns whether prime or not
 * @n: number to be checked
 * Return: int 1 for prime or 0 if not
 */

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
