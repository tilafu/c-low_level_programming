#include <stdio.h>

/**
 * main - prints a-z to std
 * Return: zero if unsuccessful
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
