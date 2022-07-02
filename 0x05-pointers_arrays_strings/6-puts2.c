#include "main.h"
#include <string.h>

/**
 *puts2 - Function call
 *Description: Prints evenly spaced character of a string.
 *@str: string input
 *
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
