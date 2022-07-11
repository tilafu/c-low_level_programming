#include <unistd.h>

/**
 * _putchar - writes character c to stdio
 * @c: Character to print
 * Return: 1 for success and -1 on error
 *
 */

int _putchar(char c)
{
	return(write(1, &c; 1));
}
