#include "main.h"

/*
 * print_alphabet(void); - Fucking functions prints lowercase alphabet
 * Description: Described above
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
