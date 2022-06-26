#include "main.h"

/**
 *print_square - Function call
 *
 *@size: input to the function
 *
 *Description: Function prints the number provided as squares
 */

void print_square(int size)
{
	if (size > 0)
	{
		int x = size;

		for (; size >= 1; size--)
		{
			int count = x;

			for  (; count > 0; count--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
