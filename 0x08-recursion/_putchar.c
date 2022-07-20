#include <unistd.h>
/**_putchar - fxn to print characters
 * @c: the character to be printed
 * Return: 1 on success and -1 on failure with errno set
 */

int _puchar(char c)
{
	return (write(1, &c, 1));
}
