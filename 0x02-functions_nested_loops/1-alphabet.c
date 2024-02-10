#include "main.h"

/**
 * print_alphabet - prints the alphabet,
 *
 * in lowercase
 *
 * followed by a new line.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		printf("%c", c);
		c++
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
