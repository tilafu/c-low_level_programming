#include "main.h"

/**
 * swap_int - swaps 2 values using pointers
 * @a: the first value
 * @b: the second value
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
