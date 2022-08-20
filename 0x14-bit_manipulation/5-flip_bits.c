#include "main.h"

/**
 * flip_bits - return number of bits
 * you need to flip to get a number from another
 * @n: first num
 * @m: 2nd num
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}
	return (nbits);
}
