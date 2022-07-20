#include "main.h"

/**
 * _strlen_recursion - return string length
 * @s: String
 * Return: int which is the length
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s ==  '\0')
		return (0);

	c = 1 + _strlen_recursion(s + 1);

	return (c);
}
