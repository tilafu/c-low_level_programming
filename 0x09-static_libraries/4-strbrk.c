#include "main.h"

/**
 * _strpbrk - search for a string for a set of bytes
 * @s: string pointer
 * @accept: string to match
 * Return: pointer to byte in s that matches that in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
