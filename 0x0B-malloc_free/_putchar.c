#include <unistd.h>
/**
 * _putchar - fxn to print characters to IO
 * @c: argument passed to hold char
 * Return: 1 is succesful, -1 and set errno if unsuccesful.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
