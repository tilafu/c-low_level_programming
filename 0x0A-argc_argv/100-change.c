#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of coins for change in an amount
 * @argc: number of cmd arguments
 * @argv: array containing command line arguments
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	 if (argc == 1 || argc > 2)
	 {
		 printf("Error\n");
		 return (1);
	 }

	 cents = atoi(argv[1]);

	 while (cents > 0)
	 {
		 if (cents >= 25)
		 {
			 cents -= 25;
		 }
		 if (cents >= 10)
		 {
			 cents -= 10;
		 }
		 if (cents >= 5)
		 {
			 cents -= 5;
		 }
		 else if (cents >= 2)
		 {
			 cents -= 2;
		 }
		 else if (cents >= 1)
		 {
			 cents -= 1;
		 }
		 ncoins += 1;
	 }
	 printf("%d\n". ncoins);
	 return (0);
}
