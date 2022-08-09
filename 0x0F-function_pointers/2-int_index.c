#include "main.h"

/**
 * int_index - search for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: pointer to compare values
 * Return: the index of the first value where cmp returns a non-0 number
 * if no element matches, return -1
 * Return -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
