#include "main.h"

/**
 * _strcat - concatenates strings like the c function with the same name
 * @dest: the destination of the catenation
 * @src: the source of the catenation
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

