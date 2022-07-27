#include "main.h"

/**
 * create_array - fxn that creates arrays starting from a char c
 * @size: size of the array
 * @c: the first character of the array
 * Return: pointer to the array or null
 */

char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	A = malloc(sizeof(char) * size);
	if (A == NULL)
		return (NULL);
	while (i < size)
	{
		A[i] = c;
		i++;
	}
	return (A);
}
