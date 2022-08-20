#include <stdio.h>

/*
 * main - prints all arguments it receives
 * @argc: number of cmd line arguments
 * @argv: array containing program cmd line arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
