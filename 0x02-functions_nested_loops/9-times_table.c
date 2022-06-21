#include "main.h"

/**
 * times_table - Function call
 * Description: Prints 9 times table
 */

void times_table(void)
{
	int x = 0;

	while (x <= 9)
	{
		int y = 0;

		while (y <= 9)
		{
			int result = x * y;

			if (result / 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (y != 0)
				{
					_putchar(' ');
				}
				_putchar(result + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			y++;
		}
		x++;
		_putchar('\n');
	}
}
