#include "main.h"

/**
 * _isalpha - check alphabets
 *
 * @c: used to check alphas
 *
 * Return: 1 for letter, 0 for uwaganis
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
