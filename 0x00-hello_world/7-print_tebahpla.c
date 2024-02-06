#include <stdio.h>
/**
 * main - entry point
 *
 * followed by new line
 *
 * return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
