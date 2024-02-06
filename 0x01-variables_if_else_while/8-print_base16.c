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
	char c = 'a';
	int n = 0;

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	while (n <= 10)
	{
		putchar('0' + n);
		n++;
	}

	putchar('\n');
	return (0);
}
