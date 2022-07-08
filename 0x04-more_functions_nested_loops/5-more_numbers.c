#include "main.h"

/**
 * more_numbers - nuumber fact check description
 *
 * Return: null
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; 1 <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchr('1');
			_putchar(j % 10 + '0');
		}

		_putchar('\n');
	}
}
