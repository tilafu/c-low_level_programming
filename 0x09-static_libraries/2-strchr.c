#include "main.h"

/**
 * _strchr - locate char c
 * @s: char array string
 * @c: char to look for
 * Return: NULL if c not found, otherwise return c address
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (0);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
