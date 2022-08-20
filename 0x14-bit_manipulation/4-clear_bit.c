#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a certain index
 * @n: pointer of unsigned long int
 * @index: index of the bit
 * Return: 1 if successful and -1 if unsuccesful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;
	return (1);
}
