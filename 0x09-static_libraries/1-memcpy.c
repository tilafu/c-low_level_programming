#include "main.h"
/**
 * _memcpy - function to copy values of pointers
 * @dest: the destination location
 * @src: the source location
 * @n: number of memory slots to be allocated
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *boss = dest;

	while (n > 0)
	{
		*dest = *src;
		n--;
		dest++;
		src++;
	}
	return (boss);
}
