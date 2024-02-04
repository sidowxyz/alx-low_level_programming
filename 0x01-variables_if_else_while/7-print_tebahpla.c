#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the lowercase alphabet in reverse order,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
    char c = 'z';

    while (c >= 'a')
    {
        putchar(c);
        c--;
    }

    putchar('\n');
    return (0);
}

