#include <stdio.h>

/**
 * main - entry point
 *
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	while (n <= 10)
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
