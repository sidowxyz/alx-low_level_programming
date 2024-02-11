#include "stdio.h"

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @n: The number to process.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	printf("%d", last_digit);
	return (last_digit);
}

int main(void)
{
	print_last_digit(8);
	print_last_digit(8);

	printf("\n");
	return (0);
}
