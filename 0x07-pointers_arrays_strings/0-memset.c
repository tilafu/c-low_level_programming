#include "main.h"
/**
 * _memset - sets a memory area with b bytes for n addresses
 * @s: pointer for he memory 1st address
 * @b: char to be stored
 * @n: number of addresses reserved
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
