#include "main.h"
#include <string.h>

/**
 *print_rev - Function call
 *Description: Prints the reverse of a string.
 *@s: string input
 *
 */

void print_rev(char *s)
{
	int len = strlen(s);

	int x = 0;

	while (s[x] != '\0')
	{
		_putchar(s[len - x - 1]);
		x++;
	}
	_putchar('\n');
}
