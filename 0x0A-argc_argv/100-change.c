#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the number of coins to
 *	make change for an amount of money.
 * @argc: The amount of arguments supplied to the program.
 * @argv: A list of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *	Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int kobo, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	kobo = atoi(argv[1]);

	while (kobo > 0)
	{
		coins++;
		if ((kobo - 25) >= 0)
		{
			kobo -= 25;
			continue;
		}
		if ((kobo - 10) >= 0)
		{
			kobo -= 10;
			continue;
		}
		if ((kobo - 5) >= 0)
		{
			kobo -= 5;
			continue;
		}
		if ((kobo - 2) >= 0)
		{
			kobo -= 2;
			continue;
		}
		kobo--;
	}

	printf("%d\n", coins);

	return (0);
}
