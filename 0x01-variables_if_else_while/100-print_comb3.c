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
	int x, y, z;

	for (x = 0; x <= 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar('0' + x);
				putchar('0' + y);
				putchar('0' + z);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('n');

	return (0);
}
