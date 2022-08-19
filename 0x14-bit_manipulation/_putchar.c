#include "main.h"

/**
 * _putchar - fxn to write characters to output
 * @c: char to be displayed
 * Return: c if successful, and 1 for an error and set errno.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
