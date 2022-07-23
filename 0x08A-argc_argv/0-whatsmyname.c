#include "main.h"
#include <stdio.h>
/**
 * main - print filename followed by new line
 * @argc: - count parameter
 * @argv: - arguments passed to main as string array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
