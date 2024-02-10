#include "main.h"


/**
 * _islower - Checks if a charector is lowercase.
 * @c: The charector to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
