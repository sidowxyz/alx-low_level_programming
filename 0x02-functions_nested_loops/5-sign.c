#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 for n > 0, 0 for n = 0, -1 for n < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('1');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
