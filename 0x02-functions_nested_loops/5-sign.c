#include "main.h"


/**
 *print_sign - Function call
 *Description: prints the sign of a number.
 *@c: input to the function
 *Return: 1 where c is greater than zero, 0 if c is zero and -1 otherwise
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
