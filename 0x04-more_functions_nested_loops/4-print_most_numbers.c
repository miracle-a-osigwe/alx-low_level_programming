#include "main.h"

/**
 * print_most_numbers - Calls _putchar
 * Description - Prints number 0 to 9 except 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	char a = '0';

	for (; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
		{
			continue;
		}
		else
		{
			_putchar(a);
		}
	}
	_putchar('\n');

}
