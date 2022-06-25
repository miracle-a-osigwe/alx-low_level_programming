#include "main.h"

/**
 * print_numbers - Calls _putchar
 * Description - Prints number 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
