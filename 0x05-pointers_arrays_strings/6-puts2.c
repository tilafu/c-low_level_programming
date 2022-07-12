#include "main.h"
/**
 * puts2 - print one char out of 2
 * @str: char array
 * Description: print 1st char, 3rd, 5th
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
