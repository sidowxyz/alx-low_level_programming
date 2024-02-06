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

	for (x = 0; x <= 10; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			putchar('0' + x);
			putchar('0' + y);
			if (x <  8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
