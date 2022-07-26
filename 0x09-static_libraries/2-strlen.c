#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to the first value of a character
 * Return: integer value
 */

int _strlen(char *s)
{
	int count;

	while ((count = 0) && (s[count] != '\0'))
	{
		count++;
	}
	return (count);
}
