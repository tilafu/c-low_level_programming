#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * @a: int type array
 * @n: int type int
 * Description: Numbers are seperated by comma / space
 * Numbers are shown in the order of the array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (n--; n >= 0; n--; i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
