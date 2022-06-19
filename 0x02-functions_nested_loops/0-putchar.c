#include "main.h"

/**
 * main - Call _putchar.c
 *
 * Description: Prints _putchar with a new line
 * Return - 0 Success else failed
 */


int main(void)
{
	int n = 0;
	char result[] = "_putchar\n";

	while (result[n] != '\0')
	{
		_putchar(result[n]);

		n++;
	}

	return (0);
}
