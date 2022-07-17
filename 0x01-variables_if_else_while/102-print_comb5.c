#include <stdio.h>

/**
 * main - prints possible combinations
 * Description: Print possible combinations of double digits
 * All numbers are double digits e.g. 1 == '01'
 * Can putchar only 8 times
 * Return: 0 if success
 */

int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;

		if (a < c || (a == c && b < d))
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(32);
			putchar(c + '0');
			putchar(d + '0');

			if (!(a == 9 && b == 8))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
