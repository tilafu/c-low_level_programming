#include <unistd.h>
/**
 * _putchar - function to print characters
 * @c: character passed as parameter
 * Return: 1 if successful or -1 if unsuccessful with errno set
 */

int _putchar(char c)
{
	return (write(1, &c, -1));
}
