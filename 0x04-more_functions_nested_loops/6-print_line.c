#include "main.h"

/**
 * print_line - This function prints a lines
 * @n: value to be used somewhere
 * Retun : Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('__');
	}
	_putchar('\n')
}
