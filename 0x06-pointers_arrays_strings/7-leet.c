#include "main.h"

/**
 * leet - encode a string to 1337
 * @s: string
 * Return: encoded string 's'
 */

char *leet(char *s)
{
	int i, j;
	char options[] = {65, 52, 69, 51, 79, 48, 84, 55, 76, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; j < 10; j += 2)
		{
			if (s[i] == options[j] || s[i] == (options[j] + 32))
				s[i] = options[j + 1];
		}
	}
	return (s);
}
