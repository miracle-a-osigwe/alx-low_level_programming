#include "main.h"

/**
 * more_numbers - Calls _putchar
 * Description - Prints the numbers 0-14 10 times
 */

void more_numbers(void)
{

	int count = 1;

	while (count <= 10)
	{
		int track = 0;

		int c;

		while (track <= 14 && count <= 10)
		{
			if (track >= 10)
			{
				char b = '0' + track / 10;

				_putchar(b);
			}
			c = track % 10;
			_putchar('0' + c);
			track++;
		}
		_putchar('\n');
		count++;
	}

}
