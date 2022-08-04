#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printchar - print char types from va_list
 * @list: va_list passed to fxn
 */

void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _printstr - print string element from va_list
 * @list: va_list passed to fxn
 */

void _printstr(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * _printfloat - print floats from va_list
 * @list: va_list passed to fxn
 */

void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _printint - print int from va_list
 * @list: va_list passed to fxn
 */

void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_all - print char, int, float, string
 * @format: string of formats to use and print
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *sep;

	checker storage[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstring },
		{ "i", _printint }
	};

	i = 0;
	sep = "";
	va_start(args, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", sep);
			storage[j].f(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
