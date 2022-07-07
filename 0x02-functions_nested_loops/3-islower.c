#include "main.h"

/**
 * _islower - main
 *
 * @c: character definition
 *
 * The fxnx returns 1 if input is low case and 0 if it's not
 *
 * Return: 1 if lower and 0 if not
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
