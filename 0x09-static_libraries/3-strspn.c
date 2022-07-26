#include "main.h"

/**
 * _strspn - search a string for bytes
 * @s: char string array
 * @accept: char array to check bytes
 * Return: Number of bytes in 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, supposed_count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		supposed_count++;
		if (count == 0 || count != supposed_count)
			break;
	}
	return (count);
}
