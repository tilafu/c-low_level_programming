#include "main.h"
/**
 * malloc_checked - returns a pointer to the allocated memory
 * @b: size of the integer to be allocated
 * Return: pointer to the allocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
