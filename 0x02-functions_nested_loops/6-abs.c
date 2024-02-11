#include "main.h"

/**
 * int _abs - computes the absolute value of an integer.
 * @n: The integer to compute the absolute value for.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
