#include <stdio.h>

/**
 * my_strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *my_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return dest;
}

int main(void)
{
	char src[] = "Hello, world!";
	char dest[20];

	my_strcpy(dest, src);
	printf("Copied string: %s\n", dest);

	return 0;
}
