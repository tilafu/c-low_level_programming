#include <stdio.h>

/**
 * main - prints hexadecimal numbers
 * Return: exit with 0 if successful
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
