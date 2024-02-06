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
	int x, y;

	for (x = 0; x <= 7; x++)
	{
		for (y = x + 1; y < 8; y++)
		{
			putchar('0' + x);
			putchar('0' + y);
			if (x <  6)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
