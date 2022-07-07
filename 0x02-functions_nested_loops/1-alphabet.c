#include <main.h>
/*
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: returns null
 */

void print_alphabet(void);
{
	char c = 'a';

	while (c <= Z)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
