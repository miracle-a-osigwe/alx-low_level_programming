#include "main.h"

/**
 * print_to_98 - Function call
 * @n: input integer to the function
 * Description: Prints any given number to 98
 *
 */

void print_to_98(int n)
{
	int end = 98;

	if (n > end)
	{
		for (; n > end; n--)
		{
			if ((n / 10) >= 10)
			{
				int a = n / 10;

				if (a >= 10)
			        {
					_putchar(a / 10 + '0');
					_putchar(a % 10 + '0');
				}
			}
			else
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');

			if (n == end)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
		}
	}
	else if (n < end)
	{
		for (; n < end; n++)
		{
			if (n < 0)
			{
				int b = n * -1;

				_putchar('-');

				if (b / 10)
				{
					_putchar(b / 10 + '0');
				}
				_putchar(b % 10 + '0');
			}

			else if (n >= 10)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(end / 10 + '0');
	_putchar(end % 10 + '0');
	_putchar('\n');
}
