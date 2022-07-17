#include <stdio.h>

/**
 * main - prints possible combinations
 * Return: 0 if success
 */
int main(void)
{
	int i, j;

	for (i = 0; j < 100)
	{
		if (i < j)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(32);
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i != 98 || j != 99)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
