#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print number with seperator and newline
 * @seperator: string to be printed btwn numbers
 * @n: number of args passed
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_args(list, int));
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(list);
}
