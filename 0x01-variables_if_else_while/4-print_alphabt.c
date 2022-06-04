#include <stdio.h>

/**
 * main - Display the alphabet
 *
 * Return: 0 when completed, else error
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		if (c == 'e' || c == 'q')
		{continue; }
		else
		{
			putchar(c);
		}
	putchar('\n');

	return (0);
}
