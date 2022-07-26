#include <unistd.h>

/**
 * _putchar - the fxn writes character c to stdout
 * @c: The printable character
 *
 * Return: print 1 on success and -1 where error is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
