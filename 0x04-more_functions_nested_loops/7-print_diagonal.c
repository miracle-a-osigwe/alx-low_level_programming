#include "main.h"

/**
 *print_diagonal - Function call
 *
 *@n: input to the function
 *
 *Description: Function prints the number provided as diagonals
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int count = 0;

		for (; n >= 1; n--)
		{
			int x = count;

			for (; x > 0; x--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
