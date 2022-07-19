#include "main.h"

/**
 * jack_bauer - prnt every minute of the day
 *
 * Description: Start from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int a = 0, b = 0, c = 0, d = 0;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
/*
 * if (i == 50 && j > 50)
 *			break;
 */
		}
	}
}
