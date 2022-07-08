#include <stdio.h>

/**
 * _putchar - this function is used to print characters to stdio.
 * @c: integer value for putchar
 * Return: 1 on success or errno is set and returns -1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
