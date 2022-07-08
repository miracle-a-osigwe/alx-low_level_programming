#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 *print_numbers - function call
 *Description: a function that prints numbers.
 *@separator: string input to the function
 *@n: first number to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nlist;

	int i, x = 1, y = (int) n;

	va_start(nlist, n);

	while (x <= y)
	{
		i = va_arg(nlist, int);

		if (strcmp(separator, "NULL") == 0)
		{
			printf("%d", i);
		}
		else if (x < y)
		{
			printf("%d%s", i, separator);
		}
		else
		{
			printf("%d", i);
		}
		x++;
	}
	printf("\n");
}
