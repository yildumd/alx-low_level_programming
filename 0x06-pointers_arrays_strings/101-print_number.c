#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer parameter
 * Return: void
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	/* Handle negative numbers */
	if (n < 0)
	{
		putchar('-');
		n1 = -n; /* Convert the number to its positive counterpart */
	}

	/* Recursively print the digits of the number */
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
		/* Call the function recursively with the remaining digits */
	}

	/* Print the last digit */
	putchar((n1 % 10) + '0');
}
