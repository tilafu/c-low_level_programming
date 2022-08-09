#include "function_pointers.h"

/**
 * _putchar: prints a character using stdlib
 * @c: character to be print
 * Return: 1 if successful and -1 with errno set if failed.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
