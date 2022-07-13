#include <unistd.h>

/**
 * _putchar - used to print chars to the stdlib
 * @c: character to be printed.
 * Return: 1 on success, -1 and errno on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
