#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string and a newline
 * @seperator: string to be printed between strings
 * @n: number of strings passed to fxn
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *hold;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		hold = va_arg(list, char *);
		if (hold == NULL)
			printf("(nil)");
		else
			printf("%s", hold);
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(list);
}
