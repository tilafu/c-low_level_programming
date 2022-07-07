#include "main.h"

/*
 * print_alphabet(void); - Fucking functions prints lowercase alphabet
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= Z)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
