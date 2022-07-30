#include <stlib.h>
/**
 * _putchar - fxn to print characters.
 * @c: character to be printed
 * Return: 1 for success, -1 for fail with set errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
