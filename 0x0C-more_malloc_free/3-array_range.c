#include "main.h"
/**
 * array_range - create array of integers from min to max
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(p + i) = min;
	return (p);
}
