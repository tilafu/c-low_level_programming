#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main  - checks if s is an integer
 * @argc: number of cmd arguments
 * @argv: array containing program cmd line args
 * Return: 0 or 1 if unsuccessful
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
