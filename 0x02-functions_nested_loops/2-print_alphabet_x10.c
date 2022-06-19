#include "main.h"

/**
 * print_alphabet_x10 - Calls _putchar
 * Description - Prints the alphabet in lower case 10x
 *
 */

void print_alphabet_x10(void)
{

	int count = 1;

	while (count <= 10)
	{
		char a = 'a';

		while (a <= 'z' && count <= 10)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		count++;
	}

}
