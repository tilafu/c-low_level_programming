#include "main.h"

/**
 * _strcmp - Compares strings
 * @s1: string i
 * @s2: string 2
 * Return: the differentce of the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
