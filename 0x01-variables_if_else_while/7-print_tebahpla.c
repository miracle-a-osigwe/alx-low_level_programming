#include <stdio.h>

/**
 * main - Display the alphabet
 *
 * Return: 0 when completed, else error
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');

	return (0);
}
