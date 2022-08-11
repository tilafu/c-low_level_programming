#include <stdio.h>

/**
 * first - fxn executed before the main
 * Return: no return value
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
