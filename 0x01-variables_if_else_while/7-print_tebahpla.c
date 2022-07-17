#include <stdio.h>

/**
 * main - prints backward small case
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
