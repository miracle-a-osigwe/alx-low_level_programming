#include "main.h"


/**
 *jack_bauer - Function call
 *
 *Description: Prints every minute of the day
 *
 */


void jack_bauer(void)
{
	int x = 0;

	int y, a, b;

	while (x <= 2)
	{
		y = 0;

		for ( ; y <= 9; y++)
		{

			a = 0;

			for ( ; a <= 5; a++)
			{
				b = 0;

				while (b <= 9)
				{
					if (x == 2 && y >= 4)
					{
						break;
					}
					else
					{
						_putchar('0' + x);
						_putchar(y + '0');
						_putchar(':');
						_putchar('0' + a);
						_putchar('0' + b);
						_putchar('\n');
					}

					b++;
				}
			}
		}

		x++;
	}
}
