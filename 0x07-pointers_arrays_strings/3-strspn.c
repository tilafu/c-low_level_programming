#include "main.h"

/**
 * _strspn - search a string for bytes
 * @s: char string array
 * @accept: char array to check bytes
 * Return: Number of bytes in 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j]
			{
				c++;
				break;
			}

			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}
