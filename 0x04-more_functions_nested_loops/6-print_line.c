#include "main.h"

/**
 *print_line - Function call
 *
 *@n: input to the function
 *
 *Description: Function prints the number provided as lines
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (; n >= 1; n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
