#include "main.h"

/**
 * _isdigit - This function evaluates whether a value is int or not
 * @c: The value passed by the funtion
 * Return: 1 if its a digit or zero if its not.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
