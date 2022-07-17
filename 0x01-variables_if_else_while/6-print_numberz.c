#include <stdio.h>
/**
 * main - print numbers base 10 using putchar
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
