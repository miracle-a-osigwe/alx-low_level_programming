#include "main.h"

/**
 *print_triangle - Function call
 *
 *@size: input to the function
 *
 *Description: Function prints the number provided as triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int count = 1;

		for (; size >= 1; size--)
		{
			int x = size, counter = count;

			while (x > 1)
			{
				_putchar(' ');
				x--;
			}

			while (counter > 0)
			{
				_putchar('#');
				counter--;
			}

			_putchar('\n');
			count++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
