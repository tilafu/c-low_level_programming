#include "function_pointers.h"

/**
 * array_iterator - executes a fxn given as a parameter on array elements
 * @array: input integer array
 * @action: pointer to the fxn
 * @size: size of the array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
