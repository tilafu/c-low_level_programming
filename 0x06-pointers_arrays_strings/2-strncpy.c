#include "main.h"
/**
 * _strncpy - copies contents of one string to another
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 * Return: the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
