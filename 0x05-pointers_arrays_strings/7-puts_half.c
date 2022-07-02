#include "main.h"
#include <string.h>

/**
 *puts_half - Function call
 *Description: Prints half of a string.
 *@str: string input
 *
 */

void puts_half(char *str)
{
	int x = 0, len = strlen(str);

	if (len % 2 != 0)
	{
		len++;
	}

	while (str[x] != '\0')
	{
		if (x >= len / 2)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
