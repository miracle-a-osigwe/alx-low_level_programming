#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - function call
 *Description: Sums all the parameters.
 *@n: first input
 *Return: returns the summed result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nlist;
	int i, j = 0, x = 0, y = (int) n;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(nlist, n);
		for (i = 0; x <= y; i = va_arg(nlist, int))
		{
			j += i;
			x++;
		}
		va_end(nlist);
		return (j);
	}
}
