#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int b, i, l;
for (b = 48; b < 58; b++)
{
for (i = 49; i < 58; i++)
{
for (l = 50; l < 58; l++)
{
if (l > i && i > b)
{
putchar(b);
putchar(i);
putchar(l);
if (b != 55 || i != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
