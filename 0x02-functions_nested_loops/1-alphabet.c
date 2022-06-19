#include "main.h"

/**
 * print_alphabet - Calls _putchar
 * Description - Prints the alphabet in lower case
 * Return: 0
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
