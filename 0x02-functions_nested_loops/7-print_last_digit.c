#include "main.h"


/**
 *print_last_digit - Function call
 *
 *@a: input to the function
 *Description: Returns the last digit of a value
 *
 *Return: the value
 */


int print_last_digit(int a)
{
	int r = a % 10;
	if (r < 0)
	{
		r *= -1;
	}
	_putchar('0' + r);
	return (r);
}
