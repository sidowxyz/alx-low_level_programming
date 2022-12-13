#include "main.h"
/**
 * main - prints _putchar, followed by new line
 * Return: Always 0 (Success)
 * By Sidowxyz
 */
int main(void)
{
	char sidowxyz[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(sidowxyz[c]);
	}
	_putchar('\n');
	return (0);
}
