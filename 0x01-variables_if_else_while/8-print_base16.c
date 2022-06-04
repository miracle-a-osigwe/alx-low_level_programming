#include <stdio.h>

/**
 * main - Display the alphabet
 *
 * Return: 0 when completed, else error
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
		putchar(c);
	for (c = 'a'; c <= 'f'; ++c)
		putchar(c);

	putchar('\n');

	return (0);
}
