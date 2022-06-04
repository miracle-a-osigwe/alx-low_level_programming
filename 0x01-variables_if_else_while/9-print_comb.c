#include <stdio.h>

/**
 * main - Display the alphabet
 *
 * Return: 0 when completed, else error
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; ++c)
	{
		putchar(c % 10 + '0');
		if (c == 9)
		{continue; }
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
